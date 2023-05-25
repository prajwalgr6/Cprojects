#include <stdio.h>
/*If the ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three*/

int main()
{
    int ram,shyam,ajay;
    printf("enter the age of ram shyam and ajay");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram<shyam && ram< ajay){
        printf("ram is %d youngest among 3 ",ram);
    }
    if(shyam<ajay && shyam<ram){
        printf("ram is %d youngest among 3 ",shyam);
    }
    if(ajay<ram && ajay<shyam){
        printf("ram is %d youngest among 3 ",ajay);
    }
    return 0;
}
