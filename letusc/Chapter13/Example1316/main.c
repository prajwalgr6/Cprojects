#include <stdio.h>
#include<math.h>

int main()
{
    float x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float y[11]={102.43,100.93,97.48,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};
    float xn=0.0,yn=0.0,xy=0.0,xx=0.0,yy=0.0,r,n,d;
    for(int i=0;i<11;i++){
        xn=xn+x[i];
    }
    printf("sum of x %f\n",xn);
    for(int i=0;i<11;i++){
        yn=yn+y[i];
    }
    printf("sum of y %f\n",yn);
    for(int i=0;i<11;i++){
        xy=xy+(x[i]*y[i]);
    }
    printf("sum of x*y %f\n",xy);
    for(int i=0;i<11;i++){
        xx=xx+(x[i]*x[i]);
    }
    printf("sum of x*x %f\n",xx);
    for(int i=0;i<11;i++){
        yy=yy+(y[i]*y[i]);
    }
    printf("sum of y*y %f\n",yy);
    n=(xy-(xn*yn));
    d=(sqrt(11.0*xx-pow(xn,2.0))*(11.0*yy-pow(yn,2.0)));
    r=n/d;
    printf("coefficient r is %f\n",r);
    return 0;
}
