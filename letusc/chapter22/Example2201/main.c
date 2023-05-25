#include <stdio.h>
#include <string.h>
int main()
{
    enum department{
        assembly,manufacturing,accounts,stores
    };
    struct employee{
        char name[30];
        int age;
        enum department dept;
    };
    struct employee emp;
    strcpy(emp.name,"prajwal");
    emp.age=23;
    emp.dept=stores;
    printf("employee name is %s\n",emp.name);
    printf("employee age is %d\n",emp.age);
    printf("department is %d\n",emp.dept);
    if(emp.dept==accounts){
        printf("%s is accountant\n",emp.name);
    }
    else{
        printf("%s is not accountant\n",emp.name);
    }
    return 0;
}
