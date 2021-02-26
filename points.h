#ifndef POINTS_H
#define POINTS_H

#include <stdlib.h>
#include <ctype.h>

#include "alphabeth.h"

typedef Alphabeth Points;
Points Initialise_Points(void);
Points Update(Points ,char, int);
int GetValue(Points,char);
//void PrintPoints(Points);

#endif