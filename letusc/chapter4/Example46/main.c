#include <stdio.h>


int main()
{
    int hard,ten;
    float carbon;
    printf("enter the hardness ,carbon and tensile");
    scanf("%d %f %d",&hard,&carbon,&ten);
    if(hard>50 && carbon<0.7 && ten>5600){
        printf("grade is 10");
    }
    else if((hard>50 && carbon<0.7) && ten<=5600){
        printf("grade is 9");
    }
    else if((hard<=50 && carbon<0.7) && ten>5600){
        printf("grade is 8");
    }
    else if((hard>50 && carbon>=0.7) && ten>5600){
        printf("grade is 7");
    }
    else if((hard>50 || carbon<0.7) || ten>5600){
        printf("grade is 6");
    }
    else{
         printf("grade is 5");
    }


    return 0;
}
