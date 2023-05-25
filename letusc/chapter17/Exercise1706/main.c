#include <stdio.h>
#include <stdlib.h>
struct datecom{
    int day;
    int month;
    int year;
};
int daycom(struct datecom *);
int main()
{
    struct datecom dt;
    printf("enter the day\n");
    scanf("%d",&dt.day);
    printf("enter the month\n");
    scanf("%d",&dt.month);
    printf("enter year\n");
    scanf("%d",&dt.year);
    printf("function return %d\n", daycom(&dt));

}
int daycom(struct datecom *b){
    int day,month,year;
    printf("enter the day\n");
    scanf("%d",&day);
    printf("enter the month\n");
    scanf("%d",&month);
    printf("enter year\n");
    scanf("%d",&year);
    if(day==b->day && month==b->month && year==b->year){
        return 1;
    }
    else{
        return 0;
    }

}
