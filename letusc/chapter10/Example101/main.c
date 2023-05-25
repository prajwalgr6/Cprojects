 #include <stdio.h>
int fact(int );

int main()
{
    int a,f;
    printf("enter a");
    scanf("%d",&a);
    f=fact(a);
    printf("factorial of number is %d\n",f);
    return 0;
}
int fact(int n){
    int f;
    if(n==1 ){
        return(1);
        }
    else
    {
        f=n*fact(n-1);
        return(f);
    }
}
