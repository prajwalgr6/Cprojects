#include <stdio.h>
#include<string.h>

int main()
{
    struct bankemp  {
        char name[10];
        int age;
        float salary;
    };
    struct bankemp emp1={"hello", 34 ,22345678.546};
    struct bankemp emp2,emp3;
    strcpy(emp2.name,emp1.name);
    emp2.age=emp1.age;
    emp2.salary=emp1.salary;
    emp3=emp1;


    printf("employee name is %s\n age is %d\n salary is %f\n",emp1.name,emp1.age,emp1.salary);
    printf("employee name is %s\n age is %d\n salary is %f\n",emp2.name,emp2.age,emp2.salary);
    printf("employee name is %s\n age is %d\n salary is %f\n",emp3.name,emp3.age,emp3.salary);


}
