#include <stdio.h>
/*Write a function to calculate the factorial value of any integer
entered through the keyboard.*/

void fact();
int main()
{
    fact();

    return 0;
}
void fact(){
    int n,f=1,temp;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    for(int i=1;i<=n;i++){
        f=f*temp;
        temp--;


    }
    printf("%d",f);


}
