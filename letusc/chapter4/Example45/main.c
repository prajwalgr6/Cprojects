#include <stdio.h>
/*Any character is entered through the keyboard, write a program to
determine whether the character entered is a capital letter, a small
case letter, a digit or a special symbol.*/

int main()
{
    char a;

    printf("enter the value");
    scanf("%c",&a);
   printf("%d",a);
    if(a>=65 && a<=90){
       printf("Capital letter");
   }
    else if(a>=97 && a<=122){
       printf("small letter");
    }
   else if(a>=48 && a<=57){
       printf("numbers");
   }
    else if((a>=0 && a<=47) || (a>=58 && a<=64) || (a>=91 && a<=96) || (a>=123 && a<=127)){
       printf("special characters");
    }
    return 0;
}
