#include<stdio.h>
void  numPrint(int);
int main()
{
    int n = 1;
    printf("\n\n Recursion : print first 50 natural numbers :\n");
    printf(" The natural numbers are :");
    numPrint(n);
    printf("\n\n");
    return 0;
}
void numPrint(int n)
{
    if(n<=10)
    {
        printf(" %d ",n);
        numPrint(n+1);
    }

}

