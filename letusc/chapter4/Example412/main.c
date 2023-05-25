#include <stdio.h>

int main()
{
    char a;
    int b;
    printf("enter the character ");
    scanf("%c",&a);
    ((a>=65 && a<=90) ? printf("Capitl") : (a>=97 && a<=122) ? printf("small") : (a>=48 && a<=57) ? printf("Number") : printf("special symbol") ) ;
    return 0;
}
