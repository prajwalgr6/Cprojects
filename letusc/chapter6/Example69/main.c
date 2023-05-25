#include <stdio.h>
#include<math.h>

int main()
{

    float y=0.0,x;
    printf("enter the number");
    scanf("%f",&x);
    y=( (x-1) / x);
    for(int i=2;i<=7;i++){
        y=y+( 0.5 * pow( (x-1) / x ,i));

    }


    printf("%f",y);
    return 0;
}
