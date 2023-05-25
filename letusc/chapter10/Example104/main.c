#include <stdio.h>
/*A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion*/
void binary(int );

int main()

{
    /*
    int n,a;
    printf("enter positive integer");
    scanf("%d",&n);
    a=binary(n);
    printf("%d",a);
    return 0;
}
int binary(int n){

    int a;
    if(n==0){
        return 0;
    }
    else{

        a = (n%2) + 10 * binary(n/2);
        return a;
    }*/
   int n;
    printf("enter the value");
   scanf("%d",&n);
    binary(n);

}
void binary(int n){
   int a=0;
   while(n>0){

       a= a*10 +(n%2);
       n=n/2;
   }
   printf("%d",a);



}


