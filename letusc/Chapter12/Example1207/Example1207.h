//Write macro definitions with arguments for calculation of area and
//perimeter of a triangle, a square and a circle. Store these macro
//definitions in a file called “areaperi.h”. Include this file in your
//program, and call the macro definitions for calculating area and
//perimeter for different squares, triangles and circles
#include <stdio.h>
#define PI 3.14
#define AREAC(r) (PI*r*r)
#define PERIC(r) (2*PI*r)
#define AREAT(a,b) ((a*b)/2)
#define PERIT(a,b,c) (a+b+c)
#define AREAS(s) (s*s)
#define PERIS(s) (4*s)


