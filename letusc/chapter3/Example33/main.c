#include <stdio.h>
/*If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary
and DA = 90% of basic salary. If his salary is either equal to or above Rs.
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's
salary is input through the keyboard write a program to find his gross
salary*/

int main()
{
    int salary,netpay,hra,da;
    printf("enter salary");
    scanf("%d",&salary);
    if(salary<1500){
        hra=(salary/100)*10;
        da=(salary/100)*90;
        netpay=hra+da+salary;
        printf("Gross salary %d",netpay);
    }
    else{
            hra=500;
            da=(salary/100)*98;
            netpay=hra+da+salary;
            printf("Gross salary %d",netpay);

    }


    return 0;
}
