/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.
*/
#include <stdio.h>

int main()
{
    int n,m,f=1;
    printf("enter Two numbers");
    scanf("%d %d",&n,&m);
    while(m>0){
        f=f*n;
        m--;
    }
    printf("value of one number raised to the power of anotheris %d",f);
    return 0;
}
