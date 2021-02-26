#ifndef ALPHABETH_H
#define ALPHABETH_H

typedef struct Alphabeth_struct{
    int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
} Alphabeth;

Alphabeth InitialiseAlphabeth(void);
Alphabeth BuildComposition(char * InputLetters);

#endif