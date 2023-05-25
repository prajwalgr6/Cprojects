#include <stdio.h>
/* Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8 */

int main()
{
    int h=1189,w=841,temp;
    int n;
    printf("enter n");
    scanf("%d",&n);
    for(int a=0;a<=n;a++){

        printf("A%d is %d * %d\n ",a,h,w);
        temp=w;
        w=h/2;
        h=temp;


    }

    return 0;
}
