#include <stdio.h>
#include<math.h>
/*Write a C function to evaluate the series

sin(x)  x  (x3/ 3!)  (x5/ 5!)  (x7/ 7!) up to 10 terms.*/
void sinfun(int,float*);

int main()
{
    int a;
   float series;

    printf("enter the value of a");
    scanf("%d",&a);
    sinfun(a,&series);
    printf("%f",series);

    return 0;
}
void sinfun(int y,float *x){
    float r,b;

    int s=-1;

    r = y * (3.14/180);

    b=r;

    for(int i=3;i<=19;i=i+2){
        long fact=1;

        for(int j=1;j<=i;j++){
            fact=fact*j;

        }

        b = b + s * ( pow(r,i) / fact );
        s = s* -1;
    }
    *x=b;




}
/*void fact(int i){
    int f=1;
    while(i!=0){
        f=f*i;
        i--;
    }*/

