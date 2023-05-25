#include <stdio.h>
/*Write a general-purpose function to convert any given year into its
Roman equivalent. Use these Roman equivalents for decimal
numbers: 1 – I, 5 – V, 10 – X, 50 – L, 100 – C, 500 – D, 1000 – M.
Example:
Roman equivalent of 1988 is mdcccclxxxviii.
Roman equivalent of 1525 is mdxxv.*/
void roman (int y);
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    roman(year);
    return 0;
}
void roman(int y){
    int a;

    a=y/1000;
    if(a!=0){
        for(int i=0;i<a;i++){
            printf("M");
        }
    }
    y=y%1000;
    a=y/500;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("D");
        }
    }
    y=y%500;
    a=y/100;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("C");
        }
    }
    y=y%100;
    a=y/50;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("L");
        }
    }
    y=y%50;
    a=y/10;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("X");
        }
    }
    y=y%10;
    a=y/5;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("V");
        }
    }
    y=y%5;
    a=y/1;
    if(a!=0){
        for(int j=0;j<a;j++){
            printf("I");
        }
    }







}
