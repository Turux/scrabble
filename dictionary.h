//A library providing a Dictionary Object contaiing:
//-A Word (up to 35 characters)
//-An Alphabeth Object (see alphabeth.h) with the Word composition
//-A value for word in the current point system (see points.h)
//-The length of the Word 
#ifndef DICTIONARY_H
#define DICTIONARY_H

//Standard Import
#include <string.h>
//Custom Inputs
#include "alphabeth.h"
#include "points.h"

//Type Definition of a Dictionary Object
typedef struct dictionary_struct
{
    char Word[35];
    Alphabeth Composition;
    int Value;
    int Length;

}Dictionary;

//@Brief: A function Initialising the Dictionary Object
//@Params: 
//@Returns: An initialised Dictionary Object
Dictionary Initialise();

//@Brief: A function that creates a Dictionary Object based on a Point Systeme and a string
//@Params: A Point System Object
//@Params: A Pointer to a string of characters
//@Returns: An initialised Dictionary Object
Dictionary BuildEntry(Points,char *);

//@Brief: A function that compares a set of letters with a Dictionary obejct and returns all possible matches
//@Params: A Dictionary Object
//@Params: The length of the provided Dictionary
//@Params: A Pointer to a string of characters
//@Returns: A Pointer to a vector of Dictionaries containing all the matches found
Dictionary * FindWords(Dictionary *,int,char *);


#endif