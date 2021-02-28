//A Library providing an Point System Object for the game of Scrabble containting:
//-An Alphabeth (see alphabeth.h)
#ifndef POINTS_H
#define POINTS_H

//Standard Imports
#include <stdlib.h>
#include <ctype.h>
//Custom Imports
#include "alphabeth.h"

//Type Definition of a Point Object
typedef Alphabeth Points;

//@Brief: A function Initialising the Point System Object
//@Params: 
//@Returns: An initialised Point System Object
Points Initialise_Points(void);

//@Brief: A function to update an already existing Point System Object
//@Params: The already existing Point System Object
//@Params: A  letter of the Alphabeth
//@Params: A value (expressed in integer)
//@Returns: An updated Point System Object
Points Update(Points ,char, int);

//@Brief: A function that returns the value of a given letter
//@Params: A Point System Object
//@Params: A letter of the alphabeth
//@Returns: Value of the letter according to the Point System Object
int GetValue(Points,char);

#endif