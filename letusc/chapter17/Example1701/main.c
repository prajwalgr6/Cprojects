#include <stdio.h>

int main()
{
    struct book{
        char name[30],author[20];
        int pages,price;
    };
    struct book b1,b2,b3;
    printf("enter the book name ,author ,pages and price\n");
    scanf("%s%s%d%d",b1.name,b1.author,&b1.pages,&b1.price);
    printf("enter the book name ,author ,pages and price\n");
    scanf("%s%s%d%d",b2.name,b2.author,&b2.pages,&b2.price);
    printf("enter the book name ,author ,pages and price\n");
    scanf("%s%s%d%d",b3.name,b3.author,&b3.pages,&b3.price);

    printf("%s %s %d %d\n",b1.name,b1.author,b1.pages,b1.price);
    printf("%s %s %d %d\n",b2.name,b2.author,b2.pages,b2.price);
    printf("%s %s %d %d\n",b3.name,b3.author,b3.pages,b3.price);



    return 0;
}
