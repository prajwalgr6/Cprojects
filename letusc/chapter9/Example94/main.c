#include <stdio.h>
#include<math.h>
/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).
*/
void std(int*,float*,float*);
int main()
{
    int sum;
    float avg,dev;
    std(&sum,&avg, &dev);
    printf("sum is %d\n",sum);
    printf("avg is %f\n",avg);
    printf("dev is %f\n",dev);


    return 0;
}
void std(int *sum,float *avg,float *dev){

    int a,b,c,d,e;

    printf("enter the 5 integers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *dev=sqrt(pow((a - *avg),2.0)+pow((b -*avg),2.0)+pow((c -*avg),2.0)+pow((d -*avg),2.0)+pow((e -*avg),2.0));


}
