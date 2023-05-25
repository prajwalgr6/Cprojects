#include <stdio.h>
#include <string.h>
struct employee{
    char name[20];
    int id;
};

int main()
{
    typedef struct employee stemp;
    stemp emp;
    typedef unsigned long int uli;
    uli age;
    strcpy(emp.name,"prajwal");
    emp.id=123;



    return 0;
}
