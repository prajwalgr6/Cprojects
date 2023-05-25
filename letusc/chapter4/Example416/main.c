#include <stdio.h>
#include <math.h>

int main()
{
   float red,green,blue;
   float cyan,magneta,yellow,black,white=0;;

   printf("Enter the values of color (R,G,B):\n");
   scanf("%f %f %f",&red,&green,&blue);

   red=red/255;

   blue=blue/255;

   green=green/255;

    if(red>blue && red>green)
    {
       white=red;
    }
    else if(green>red && green>blue)
    {
       white=green;
    }
    else
    {
       white=blue;
    }
   cyan=(white-red/white);

   magneta=(white-green/white);

   yellow=(white-blue/white);

   black=1-white;

   printf("RGB values in CMYK format: %0.f %0.f %0.f %0.f\n",cyan,magneta,yellow,black);
}
