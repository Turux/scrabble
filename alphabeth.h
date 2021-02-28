//A library providing an Alphabeth object containing all integers for each letter of the English alphabeth.
#ifndef ALPHABETH_H
#define ALPHABETH_H

//Type definition
typedef struct Alphabeth_struct{
    int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
} Alphabeth;

//@Brief: A function Initialising the Alphabeth object to zeros
//@Params: 
//@Returns: An initialised Alphabeth Object
Alphabeth InitialiseAlphabeth(void);

//@Brief: A function decomposing a vector of char (sting) into the letters composing it
//@Params: Pointer to a Char (String)
//@Returns: An Alphabeth object (not initialised) containing the letters required to write the string
Alphabeth BuildComposition(char * InputLetters);

#endif