#include <stdio.h>
/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1 1980 – 1 * 1617 = 363
1617 / 363 = 4 1617 – 4 * 363 = 165
363 / 165 = 2 363 – 2 * 165 = 33
5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/
void euclid(int *,int *,int *);
int main()
{
    int a,b,r;
    printf("enter two integer");
    scanf("%d%d",&a,&b);
    euclid(&a,&b,&r);
    printf("%d",b);
    return 0;
}
void euclid(int *j,int *k,int *r){
    int temp;
    for(int i=1;i<=r;i++){
        temp=*j;
        *r=*j / *k;
        *j=*k;
        *k=temp-(*r * *k);

    }

}
