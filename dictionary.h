#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <string.h>


#include "alphabeth.h"
#include "points.h"


typedef struct dictionary_struct
{
    char Word[35];
    Alphabeth Composition;
    int Value;
    int Length;

}Dictionary;

Dictionary Initialise();
Dictionary BuildEntry(Points,char *);
Dictionary * FindWords(Dictionary *,int,char *);


#endif