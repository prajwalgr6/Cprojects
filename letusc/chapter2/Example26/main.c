#include <stdio.h>
#include<math.h>
/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the
distance (D) between them in nautical miles. The formula for
distance in nautical miles is:
D = 3963 cos-1( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/

int main()
{
    float l1,l2,g1,g2,d;
    const float pi=3.141592;
    printf("Enter latitude");
    scanf("%f%f",&l1,&l2);
    printf("Enter longitude");
    scanf("%f%f",&g1,&g2);
    l1=l1*(pi/180.0);
    l2=l2*(pi/180.0);
    g1=g1*(pi/180.0);
    g2=g2*(pi/180.0);
    d=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
    printf("Distance in nautical miles is %f\n",d);
    return 0;
}
