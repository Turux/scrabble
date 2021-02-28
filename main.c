//This program is a simple implementation of the game Scrabble:
//Provide a text file containing the value (a single integer digit) of each letter of the English alphabeth
//and a dictionary containing up to 500K words. Then the program will wait for user inputs.
//Provide up to 35 letters and the program will return the highest scoring word you can form with those letters.

//Standard Libraries Includes
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Custom Libraries Includes
#include "points.h"
#include "dictionary.h"

//Main function expecting at least one argument
int main(int argc, char *argv[])
{   
    //Initialise a Dictionary object and pre-allocate up to 500K entries
    int Dictionary_Length=0;
    Dictionary * Current_Dictionary;
    Current_Dictionary = malloc (sizeof(Dictionary) * 500000);

    //Initialise a Point Table object
    Points  Current_Points;
    Current_Points=Initialise_Points();

    //Check if exactly one input is provided
    if( argc == 2 )
    {
        //Declare and Initialise variables for file scan
        FILE * fp;
        char * line = NULL;
        unsigned long len = 0;
        long read;

        //Open file in read-only mode
        fp = fopen(argv[1], "r");
        if (fp == NULL)
            exit(EXIT_FAILURE);


        // Cycle through the lines and detect if each line is part of the Point Table or Dictionary
        while ((read = getline(&line, &len, fp)) != -1) 
        {
            if (line[1]==' ')
            {
                //printf("Building Point System...\n");
                char letter= tolower(line[0]);
                int value = line[2] - '0';
                Current_Points=Update(Current_Points,letter,value);
            }
            else{
                //printf("Building Dictionary...\n");
                Current_Dictionary[Dictionary_Length]=BuildEntry(Current_Points,line);
                Dictionary_Length+=1;
            }
        }
        //Close the file when fully scanned
        fclose(fp);
        if (line)
            free(line);
    }
   //Sanity check on number of inputs 
    else if( argc > 2 ) {
        fprintf(stderr,"Too many arguments supplied.\n");
        exit(EXIT_FAILURE);
    }
    else {
        fprintf(stderr,"One argument expected.\n");
        exit(EXIT_FAILURE);
    }
    //Initialise placeholder for user input
    char InputLetters[35];
    memset(InputLetters, 0, 35);
    //Continue accepting inputs until an empty line is entered
    while(InputLetters[0]!='\n')
    {
        //User input
        fprintf(stderr,"Input your letters or press [Enter] to quit:\n");
        fgets(InputLetters,35,stdin);
        // Initialise a Dictionary to store all possible matches and pre-allocate up to 500K entries (Worse case scenario)
        Dictionary * Results;
        Results = malloc (sizeof(Dictionary) * 500000);
        //Find all matches
        Results=FindWords(Current_Dictionary,Dictionary_Length,InputLetters);
        
        //Find the best match
        int Result_Counter=0;
        int Max_Value=0;
        char Best_Match[35];
        memset(Best_Match, 0, 35);
        while(Results[Result_Counter].Length)
        {
            if (Results[Result_Counter].Value>Max_Value)
            {
                Max_Value=Results[Result_Counter].Value;
                strcpy(Best_Match,Results[Result_Counter].Word);
                Result_Counter+=1;
            }
            else Result_Counter+=1;
        }
        //Present the results to the user
        if (Max_Value)
        fprintf(stderr,"%s %d\n",Best_Match,Max_Value);
        else if (InputLetters[0]!='\n')
        fprintf(stderr,"No match found\n");
        else 
        fprintf(stderr,"Goodbye\n");
        free(Results);
    }
    //Free memory and exit
    free(Current_Dictionary);
    exit(EXIT_SUCCESS);
}