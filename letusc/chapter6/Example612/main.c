#include <stdio.h>
#include <math.h>
/*Ramanujan number is the smallest number that can be expressed
as sum of two cubes in two different ways. Write a program to print
all such numbers up to a reasonable limit*/

int main()
{
    int a,count=0;
    for(int i=1;i<=50000;i++){
        count=1;

        for(int j=1;j<=30;j++){
            for(int k=1;k<=30;k++){
                a=pow(j,3)+pow(k,3);
                if(a==i){
                    count++;
                }
            }

        }
                if(count>=4){
                printf("%d  ",i);
            }





    }

    return 0;
}
