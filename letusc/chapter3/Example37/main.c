#include <stdio.h>
/*According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year*/

int main()
{
int year,i,j;
printf("enter year");
scanf("%d",&year);
j=year/4;
i= (year+364)+j;
if(i%7==2){

    printf("Monday\n");
}
  else if (i%7==3){
             printf("Tuesday\n");
         }
else if (i%7==4){
             printf("wednesday\n");
}
else if (i%7==5){
             printf("Thursday\n");
         }
else if (i%7==6){
             printf("Friday\n");
}
else if  (i%7==0){
             printf("saturday\n");
         }
else if (i%7==1){
             printf("sunday\n");
}


return 0;
}
