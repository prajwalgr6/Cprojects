#include <stdio.h>


int main()
{
    int s;
    char g,q;
    printf("enter the gender,service and qualifications: ");
    scanf("%c %d %c",&g,&s,&q);
    if(g=='m'){
        if(s>=10 && q=='p'){
            printf("salary is 15000");
        }
        else if((s>=10 && q=='g') || (s<10 && q=='p')){
             printf("salary is 10000");
        }
        else if(s<10 && q=='g'){
              printf("salary is 7000");
        }
    }
     if(g=='f'){
        if(s>=10 && q=='p'){
              printf("salary is 12000");
        }
        else if(s>=10 && q=='g'){
              printf("salary is 9000");
        }
        else if(s>=10 && q=='p'){
              printf("salary is 10000");
        }
        else if(s<10 && q=='g'){
              printf("salary is 6000");
        }
    }
    return 0;
}
