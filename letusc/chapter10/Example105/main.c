#include <stdio.h>
/*Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first few
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...*/
int fib(int);
int main()
{
    int a;
    printf("enter the number");
    scanf(" %d",&a);
    for(int i=0;i<=a;i++){
        printf("%d  ",fib(i));
    }


    return 0;
}
int fib(int n){


    if(n==0){

        return 0;
    }
    else if(n==1){
        return 1;
    }
    else {
        return (fib(n-1)+fib(n-2));
    }

}

