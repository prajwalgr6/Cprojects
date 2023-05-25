#include <stdio.h>
/*Write a program to print the multiplication table of the number
        entered by the user. The table should get displayed in the
            following form:*/

int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){

        printf("%d\n",a*i);
    }

    return 0;
}
