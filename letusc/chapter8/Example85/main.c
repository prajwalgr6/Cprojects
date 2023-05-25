#include <stdio.h>
/*A positive integer is entered through the keyboard. Write a function
to obtain the prime factors of this number.*/

void prime(int p);
int main()
{
    int prim;
    printf("enter the integer");
    scanf("%d",&prim);
    prime(prim);

    return 0;
}
void prime(int p){

    for(int i=2;i<=p/2;){
        if(p%i==0){
            p=p/i;
            printf("%d\n",i);

        }
        else{
            i++;
        }
    }
    printf("%d\n",p);

}
