#include <stdio.h>

int main()
{
    char first[20],mid[20],last[20];
    printf("enter the First name:\n");
    scanf("%s",first);
    printf("enter the middle name:\n");
    scanf("%s",mid);
    printf("enter the last name:\n");
    scanf("%s",last);
    printf("Abbreviate name:%c %c %s\n",first[0],mid[0],last);


    return 0;
}
