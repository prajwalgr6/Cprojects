#include <stdio.h>
/*Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight*/

int main()
{
    for(int i=0;i<=24;i++){
        if(i>=0 && i<=11){
            if(i>=0 && i<=6){

            printf("%d AM MidNight\n",i);
            }
            else
            {
            printf("%d AM Morning\n",i);
            }
        }
        else if(i>=12 && i<=24){
            if(i>=12 && i<=18){
            printf("%d PM Noon\n",i);
        }
            else{
            printf("%d PM Night\n",i);
            }
        }
    }
    return 0;
}
