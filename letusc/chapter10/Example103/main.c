#include <stdio.h>
/*A positive integer is entered through the keyboard, write a program
to obtain the prime factors of the number. Modify the function
suitably to obtain the prime factors recursively*/
void prime(int ,int);
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    prime(a,2);


    return 0;
}
void prime(int n,int i){

    if(i<=n){
        if(n%i==0){

            printf("%d\n",i);

            n=n/i;
            prime(n,i);

        }
        else  {
            i++;
            prime(n,i);
            }


    }



}
