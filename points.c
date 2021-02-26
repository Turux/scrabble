#include "points.h"

Points Initialise_Points(){
    Points Current_Score;
    Current_Score.A=0;
    Current_Score.B=0;
    Current_Score.C=0;
    Current_Score.D=0;
    Current_Score.E=0;
    Current_Score.F=0;
    Current_Score.G=0;
    Current_Score.H=0;
    Current_Score.I=0;
    Current_Score.J=0;
    Current_Score.K=0;
    Current_Score.L=0;
    Current_Score.M=0;
    Current_Score.N=0;
    Current_Score.O=0;
    Current_Score.P=0;
    Current_Score.Q=0;
    Current_Score.R=0;
    Current_Score.S=0;
    Current_Score.T=0;
    Current_Score.U=0;
    Current_Score.V=0;
    Current_Score.W=0;
    Current_Score.X=0;
    Current_Score.Y=0;
    Current_Score.Z=0;

    return Current_Score;
}

Points Update(Points Currest_Score,char letter,int value)
{
    switch (letter)
    {
    case 'a':
        Currest_Score.A=value;
        break;
    case 'b':
        Currest_Score.B=value;
        break;
    case 'c':
        Currest_Score.C=value;
        break;
    case 'd':
        Currest_Score.D=value;
        break;
    case 'e':
        Currest_Score.E=value;
        break;
    case 'f':
        Currest_Score.F=value;
        break;    
    case 'g':
        Currest_Score.G=value;
        break;
    case 'h':
        Currest_Score.H=value;
        break;
    case 'i':
        Currest_Score.I=value;
        break;    
    case 'j':
        Currest_Score.J=value;
        break;
    case 'k':
        Currest_Score.K=value;
        break;
    case 'l':
        Currest_Score.L=value;
        break;    
    case 'm':
        Currest_Score.M=value;
        break;
    case 'n':
        Currest_Score.N=value;
        break;
    case 'o':
        Currest_Score.O=value;
        break;
    case 'p':
        Currest_Score.P=value;
        break;
    case 'q':
        Currest_Score.Q=value;
        break;
    case 'r':
        Currest_Score.R=value;
        break;
    case 's':
        Currest_Score.S=value;
        break;
    case 't':
        Currest_Score.T=value;
        break;
    case 'u':
        Currest_Score.U=value;
        break;
    case 'v':
        Currest_Score.V=value;
        break;
    case 'w':
        Currest_Score.W=value;
        break;
    case 'x':
        Currest_Score.X=value;
        break;
    case 'y':
        Currest_Score.Y=value;
        break;
    case 'z':
        Currest_Score.Z=value;
        break;
    default:
        break;
    }
    return Currest_Score;
}

int GetValue(Points Current_Point,char letter)
{
    switch (letter)
    {
    case 'a':
        return Current_Point.A;
        break;
    case 'b':
        return Current_Point.B;
        break;
    case 'c':
        return Current_Point.C;
        break;
    case 'd':
        return Current_Point.D;
        break;
    case 'e':
        return Current_Point.E;
        break;
    case 'f':
        return Current_Point.F;
        break;    
    case 'g':
        return Current_Point.G;
        break;
    case 'h':
        return Current_Point.H;
        break;
    case 'i':
        return Current_Point.I;
        break;    
    case 'j':
        return Current_Point.J;
        break;
    case 'k':
        return Current_Point.K;
        break;
    case 'l':
        return Current_Point.L;
        break;    
    case 'm':
        return Current_Point.M;
        break;
    case 'n':
        return Current_Point.N;
        break;
    case 'o':
        return Current_Point.O;
        break;
    case 'p':
        return Current_Point.P;
        break;
    case 'q':
        return Current_Point.Q;
        break;
    case 'r':
        return Current_Point.R;
        break;
    case 's':
        return Current_Point.S;
        break;
    case 't':
        return Current_Point.T;
        break;
    case 'u':
        return Current_Point.U;
        break;
    case 'v':
        return Current_Point.V;
        break;
    case 'w':
        return Current_Point.W;
        break;
    case 'x':
        return Current_Point.X;
        break;
    case 'y':
        return Current_Point.Y;
        break;
    case 'z':
        return Current_Point.Z;
        break;
    default:
        return 0;
        break;
    }
}