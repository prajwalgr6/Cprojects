#include <stdio.h>
/*If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100 */

int main()
{
    int a,b,c,d,e,Total;
    float per;
    printf("enter the marks of student");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    Total=a+b+c+d+e;
    printf("total marks is %d\n ",Total);
    per=((Total/500.0)*100.0);
    printf("percentage is %f\n",per);

    return 0;
}
