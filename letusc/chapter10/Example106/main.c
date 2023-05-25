#include <stdio.h>
/*Write a recursive function to obtain the running sum of first 25
natural numbers*/
int sum(int );
int main()
{
    int a,s;
    printf("enter an integer");
    scanf("%d",&a);
    s=sum(a);
    printf("%d",s);
    return 0;
}
int sum(int a){
    int f;
    if(a==0){
        return 0;

    }
    else{
      f=a+sum (a-1);
        return f;

    }
}
