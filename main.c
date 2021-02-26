#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

#include "points.h"
#include "dictionary.h"

int main(int argc, char *argv[])
{
    int Dictionary_Length=0;
    Dictionary * Current_Dictionary;
    Current_Dictionary = malloc (sizeof(Dictionary) * 500000);
    Points  Current_Points;
    Current_Points=Initialise_Points();
    if( argc == 2 )
    {
        FILE * fp;
        char * line = NULL;
        unsigned long len = 0;
        long read;

        fp = fopen(argv[1], "r");
        if (fp == NULL)
            exit(EXIT_FAILURE);

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

        fclose(fp);
        if (line)
            free(line);
    }
    else if( argc > 2 ) {
        fprintf(stderr,"Too many arguments supplied.\n");
        exit(EXIT_FAILURE);
    }
    else {
        fprintf(stderr,"One argument expected.\n");
        exit(EXIT_FAILURE);
    }

    char InputLetters[35];
    memset(InputLetters, 0, 35);
    while(InputLetters[0]!='\n')
    {

        fprintf(stderr,"Input your letters or press [Enter] to quit:\n");
        fgets(InputLetters,35,stdin);
        Dictionary * Results;
        Results = malloc (sizeof(Dictionary) * 500000);
        Results=FindWords(Current_Dictionary,Dictionary_Length,InputLetters);
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
        if (Max_Value)
        fprintf(stderr,"%s %d\n",Best_Match,Max_Value);
        else if (InputLetters[0]!='\n')
        fprintf(stderr,"No match found\n");
        else 
        fprintf(stderr,"Goodbye\n");
        free(Results);
    }
    free(Current_Dictionary);
    exit(EXIT_SUCCESS);
}