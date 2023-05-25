#include <stdio.h>
struct book {
    char bookname[30],author[30];
    int price;
};
void display1(char *,char *,int);
void display2(struct book*);
void display3(struct book);
int main()
{

    struct book b={"physics","Natesh",345};
    display1(b.bookname,b.author,b.price);
    display2(&b);
    display3(b);


    return 0;
}
void display1(char *name,char *auth,int cost){
    printf("%s %s %d\n",name,auth,cost);
}
void display2(struct book *b){
    printf("%s %s %d\n",b->bookname,b->author,b->price);
}
void display3(struct book b){
    printf("%s %s %d\n",b.bookname,b.author,b.price);
}
