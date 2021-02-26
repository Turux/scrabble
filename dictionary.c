#include "dictionary.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>

Dictionary Initialise()
{
    Dictionary NewDictionary;
    NewDictionary.Composition=InitialiseAlphabeth();
    NewDictionary.Length=0;
    NewDictionary.Value=0;
    memset(NewDictionary.Word, 0, 35);
    return NewDictionary;
}

Dictionary BuildEntry(Points Current_Point,char * Word)
{
    Dictionary NewDictionary=Initialise();
    int len=strlen(Word);
    NewDictionary.Length=len;
    memset(NewDictionary.Word,0,len+1);
    //memcpy(NewDictionary.Word,Word,len+1);
    int i;
    for (i = 0; i < len; i++)
    {
        if (isalpha(Word[i]))
        {
            NewDictionary.Word[i]=Word[i];
            char current=tolower(Word[i]);
            switch (current)
            {
            case 'a':
                NewDictionary.Composition.A+=1;
                NewDictionary.Value+=Current_Point.A;
                break;
            case 'b':
                NewDictionary.Composition.B+=1;
                NewDictionary.Value+=Current_Point.B;
                break;
            case 'c':
                NewDictionary.Composition.C+=1;
                NewDictionary.Value+=Current_Point.C;
                break;
            case 'd':
                NewDictionary.Composition.D+=1;
                NewDictionary.Value+=Current_Point.D;
                break;
            case 'e':
                NewDictionary.Composition.E+=1;
                NewDictionary.Value+=Current_Point.E;
                break;
            case 'f':
                NewDictionary.Composition.F+=1;
                NewDictionary.Value+=Current_Point.F;
                break;
            case 'g':
                NewDictionary.Composition.G+=1;
                NewDictionary.Value+=Current_Point.G;
                break;
            case 'h':
                NewDictionary.Composition.H+=1;
                NewDictionary.Value+=Current_Point.H;
                break;
            case 'i':
                NewDictionary.Composition.I+=1;
                NewDictionary.Value+=Current_Point.I;
                break;
            case 'j':
                NewDictionary.Composition.J+=1;
                NewDictionary.Value+=Current_Point.J;
                break;
            case 'k':
                NewDictionary.Composition.K+=1;
                NewDictionary.Value+=Current_Point.K;
                break;
            case 'l':
                NewDictionary.Composition.L+=1;
                NewDictionary.Value+=Current_Point.L;
                break;
            case 'm':
                NewDictionary.Composition.M+=1;
                NewDictionary.Value+=Current_Point.M;
                break;
            case 'n':
                NewDictionary.Composition.N+=1;
                NewDictionary.Value+=Current_Point.N;
                break;
            case 'o':
                NewDictionary.Composition.O+=1;
                NewDictionary.Value+=Current_Point.O;
                break;
            case 'p':
                NewDictionary.Composition.P+=1;
                NewDictionary.Value+=Current_Point.P;
                break;
            case 'r':
                NewDictionary.Composition.R+=1;
                NewDictionary.Value+=Current_Point.R;
                break;
            case 's':
                NewDictionary.Composition.S+=1;
                NewDictionary.Value+=Current_Point.S;
                break;
            case 't':
                NewDictionary.Composition.T+=1;
                NewDictionary.Value+=Current_Point.T;
                break;
            case 'u':
                NewDictionary.Composition.U+=1;
                NewDictionary.Value+=Current_Point.U;
                break;
            case 'v':
                NewDictionary.Composition.V+=1;
                NewDictionary.Value+=Current_Point.V;
                break;
            case 'w':
                NewDictionary.Composition.W+=1;
                NewDictionary.Value+=Current_Point.W;
                break;
            case 'x':
                NewDictionary.Composition.X+=1;
                NewDictionary.Value+=Current_Point.X;
                break;
            case 'y':
                NewDictionary.Composition.Y+=1;
                NewDictionary.Value+=Current_Point.Y;
                break;
            case 'z':
                NewDictionary.Composition.Z+=1;
                NewDictionary.Value+=Current_Point.Z;
                break;
            default:
                break;
            }
        }
        else 
        break; 
    }
    NewDictionary.Length=i;
    return NewDictionary;
    
}

Dictionary * FindWords(Dictionary * CurrentDictionary, int DictionaryLength,char * Input_Letters)
{
    Alphabeth InputAlphabeth=BuildComposition(Input_Letters);
    Dictionary * Foundwords;
    Foundwords = malloc (sizeof(Dictionary) * 500000);
    int len=strlen(Input_Letters);
    int counter=0;
    for (int i=0; i<DictionaryLength; i++)
    {
        if (CurrentDictionary[i].Length>len)
        continue;
        else
        {
            if (CurrentDictionary[i].Composition.A>InputAlphabeth.A ||
                CurrentDictionary[i].Composition.B>InputAlphabeth.B ||
                CurrentDictionary[i].Composition.C>InputAlphabeth.C ||
                CurrentDictionary[i].Composition.D>InputAlphabeth.D ||
                CurrentDictionary[i].Composition.E>InputAlphabeth.E ||
                CurrentDictionary[i].Composition.F>InputAlphabeth.F ||
                CurrentDictionary[i].Composition.G>InputAlphabeth.G ||
                CurrentDictionary[i].Composition.H>InputAlphabeth.H ||
                CurrentDictionary[i].Composition.I>InputAlphabeth.I ||
                CurrentDictionary[i].Composition.J>InputAlphabeth.J ||
                CurrentDictionary[i].Composition.K>InputAlphabeth.K ||
                CurrentDictionary[i].Composition.L>InputAlphabeth.L ||
                CurrentDictionary[i].Composition.M>InputAlphabeth.M ||
                CurrentDictionary[i].Composition.N>InputAlphabeth.N ||
                CurrentDictionary[i].Composition.O>InputAlphabeth.O ||
                CurrentDictionary[i].Composition.P>InputAlphabeth.P ||
                CurrentDictionary[i].Composition.Q>InputAlphabeth.Q ||
                CurrentDictionary[i].Composition.R>InputAlphabeth.R ||
                CurrentDictionary[i].Composition.S>InputAlphabeth.S ||
                CurrentDictionary[i].Composition.T>InputAlphabeth.T ||
                CurrentDictionary[i].Composition.U>InputAlphabeth.U ||
                CurrentDictionary[i].Composition.V>InputAlphabeth.V ||
                CurrentDictionary[i].Composition.W>InputAlphabeth.W ||
                CurrentDictionary[i].Composition.X>InputAlphabeth.X ||
                CurrentDictionary[i].Composition.Y>InputAlphabeth.Y ||
                CurrentDictionary[i].Composition.Z>InputAlphabeth.Z)
                continue;
            else 
            {
                Foundwords[counter]=CurrentDictionary[i];
                counter+=1;
            }

        }
    }
    return Foundwords;

}