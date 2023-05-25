#include <stdio.h>
#include <stdio.h>
struct employee {
    int code;
    char name[20];
    int date,month,year;
};
void display(struct employee *,int);
int main()
{
    int size,itr;
    printf("enter the number of employee\n");
    scanf("%d",&size);
    struct employee emp[size];
    for(itr=0;itr<size;itr++){
        printf("enter the employee code\n");
        scanf("%d",&emp[itr].code);
        printf("enter the employee name\n");
        scanf("%s",emp[itr].name);
        printf("enter the date ,month and year\n");
        scanf("%d %d %d",&emp[itr].date,&emp[itr].month,&emp[itr].year);
    }

    display(emp,size);

    return 0;
}
void display(struct employee *em,int size){
    int curdt,curmon,curyr,itr;
    printf("enter the current date and month and year\n");
    scanf("%d %d %d",&curdt,&curmon,&curyr);
    for(itr=0;itr<size;itr++){
    if((curyr - em[itr].year ) >= 3){
        printf("%s employee has %d year of experince\n",em[itr].name,curyr - em[itr].year);
    }

    }

}
