//Includes
#include "alphabeth.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>


Alphabeth InitialiseAlphabeth(){
    Alphabeth NewObj;
    NewObj.A=0;
    NewObj.B=0;
    NewObj.C=0;
    NewObj.D=0;
    NewObj.E=0;
    NewObj.F=0;
    NewObj.G=0;
    NewObj.H=0;
    NewObj.I=0;
    NewObj.J=0;
    NewObj.K=0;
    NewObj.L=0;
    NewObj.M=0;
    NewObj.N=0;
    NewObj.O=0;
    NewObj.P=0;
    NewObj.Q=0;
    NewObj.R=0;
    NewObj.S=0;
    NewObj.T=0;
    NewObj.U=0;
    NewObj.V=0;
    NewObj.W=0;
    NewObj.X=0;
    NewObj.Y=0;
    NewObj.Z=0;
    return NewObj;
}

Alphabeth BuildComposition(char * InputLetters)
{
    Alphabeth Composition=InitialiseAlphabeth();
    int len=strlen(InputLetters);
    for (int i=0; i<len; i++)
    {
        char current=tolower(InputLetters[i]);
        switch (current)
        {
        case 'a':
            Composition.A+=1;
            break;
        case 'b':
            Composition.B+=1;
            break;
        case 'c':
            Composition.C+=1;
            break;
        case 'd':
            Composition.D+=1;
            break;
        case 'e':
            Composition.E+=1;
            break;
        case 'f':
            Composition.F+=1;
            break;
        case 'g':
            Composition.G+=1;
            break;
        case 'h':
            Composition.H+=1;
            break;
        case 'i':
            Composition.I+=1;
            break;
        case 'j':
            Composition.J+=1;
            break;
        case 'k':
            Composition.K+=1;
            break;
        case 'l':
            Composition.L+=1;
            break;
        case 'm':
            Composition.M+=1;
            break;
        case 'n':
            Composition.N+=1;
            break;
        case 'o':
            Composition.O+=1;
            break;
        case 'p':
            Composition.P+=1;
            break;
        case 'r':
            Composition.R+=1;
            break;
        case 's':
            Composition.S+=1;
            break;
        case 't':
            Composition.T+=1;
            break;
        case 'u':
            Composition.U+=1;
            break;
        case 'v':
            Composition.V+=1;
            break;
        case 'w':
            Composition.W+=1;
            break;
        case 'x':
            Composition.X+=1;
            break;
        case 'y':
            Composition.Y+=1;
            break;
        case 'z':
            Composition.Z+=1;
            break;
        default:
            break;
        }
    }
    return Composition;

}