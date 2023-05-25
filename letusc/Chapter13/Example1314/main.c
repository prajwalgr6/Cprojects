#include <stdio.h>
#include<math.h>

int main()
{
    int a[15]={-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float x=0.0,xb,d=0.0,sd;
    for(int i=0;i<15;i++){
        x=x+a[i];
    }
    printf("sum of array %f\n",x);
    xb=x/15;
    printf("mean is %f\n",xb);
    for(int i=0;i<15;i++){
        d=d+pow((a[i]-xb),2);
    }
    printf(" deviation is %f\n",d);
    sd=sqrt(d/(15-1));
    printf("standard deviation is %f\n",sd);

    //int n=sizeof(a[15]);
   // printf("%d ",n);

    return 0;
}
