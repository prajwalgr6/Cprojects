#include <stdio.h>
void prime(int  );
int main()
{
    int a;
    printf("enter number");
    scanf("%d",&a);

    prime(a);
    return 0;
}
void prime(int n){

    int count=1;
    if(n==0){
        return;
    }
    else{
        prime(n-1);
        count=1;
        for(int i=2;i <= n/2; i++){
        if(n%i==0){
                count++;


        }
        }
        if(count==1){

            printf("%d\n",n);


        }
        }



}
