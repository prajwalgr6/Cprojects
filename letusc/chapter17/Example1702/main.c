#include <stdio.h>
void linkfloat();


int main()
{
    struct book{
        char name;
        int price;
    };
    struct book b[10];
    int i,dh;
    for(i=0;i<1;i++){
        printf("enter name and price\n");
        scanf("%c%d",&b[i].name,&b[i].price);
        while((dh=getchar())!='\n');
    }
    for(i=0;i<1;i++){
        printf("%c%d",b[i].name,b[i].price);
    }

    return 0;
}
void linkfloat(){
    printf("hello");
    float a=0,*b;
    b=&a;
    a=*b;

}
