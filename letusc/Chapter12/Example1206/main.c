//Write down macro definitions for the following:
//1. To test whether a character is a small case letter or not.
//2. To test whether a character is a upper case letter or not.
//3. To test whether a character is an alphabet or not. Make use of
//the macros you defined in 1 and 2 above.
//4. To obtain the bigger of two numbers.
#include<stdio.h>
#define SMALL(x) (x>=97 && x<=122?printf("%c is Small case\n",x):printf("%c is not small case\n",x))
#define UPPER(x) (x>=65 && x<=90?printf("%c is upper case\n",x):printf("%c is not upper case\n",x))
#define ALPHA(x) (x>=48 && x<=57?printf("%c Number\n",x):printf("%c is not number\n",x))
#define BIG(a,b) (a>b?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a))
int main(){
    char a;
    int b,c;
    printf("enter the char\n");
    scanf("%c",&a);
    SMALL(a);
    UPPER(a);
    ALPHA(a);
    printf("enter the two number\n");
    scanf("%d %d",&b,&c);
    BIG(b,c);

}
