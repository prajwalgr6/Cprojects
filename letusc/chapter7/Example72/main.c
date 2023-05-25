#include <stdio.h>
/*1. Factorial of a number
134 Let Us C
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropriate action should be
taken and once this action is finished, the menu should reappear.
Unless the user selects the ‘Exit’ option the program should
continue to run.
Hint: Make use of an infinite while and a switch statemen*/

int main()
{
    int ch;
    while(1){
        printf("1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit");
        scanf("%d",&ch);
        switch (ch) {
        case 1:printf("enter the number");
            int n,fact=1;
            scanf("%d",&n);
            for(int i=n;i>0;i--){
                fact=fact*n;
                n=n-1;
            }
            printf("factorial of number is %d\n",fact);
        case 2:printf("enter the number");
            int m,count;
            scanf("%d",&m);
            for(int i=2;i<=m/2;i++){

                count=1;
                if(m%i==0){
                    printf(" %d is not prime number\n",m);
                    count++;
                    break;

                }
            }
            if(count==1){
                    printf(" %d is  prime number\n",m);
            }
        case 3:printf("enter the number");
            int s;
            scanf("%d",&s);
            if(s%2==0){
                    printf("%d is even number\n",s);
            }
            else {
                    printf("%d is odd number\n",s);
            }
            break;
        default:
            break;
        }
    }
    return 0;
}
