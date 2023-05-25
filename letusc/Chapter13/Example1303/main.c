#include <stdio.h>
void display1(int );
void display2(int*);
int main()
{
    int m[]={1,2,3,4,5,6};
    for(int i=0;i<=8;i++){
        display1(m[i]);
    }
    for(int i=0;i<=8;i++){
        display2(&m[i]);
    }

    return 0;
}
void display1(int n){
    printf("%d\n",n);

}
void display2(int* n){
    printf("%d\n",*n);

}
