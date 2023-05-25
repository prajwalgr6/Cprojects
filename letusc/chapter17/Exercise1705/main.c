#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct library{
    int accnum;
    char title[30];
    char author[30];
    int price;
    int flag;
};

int main()
{
    int size,ch,it,cmp,accnums;
    static int itr=0;
    char authorn[20];


    printf("enter the number books in library\n");
    scanf("%d",&size);
    struct library lib[size];

    while(1){
    printf("1.Add book information\n2.Display Book information\n3.List all books of given author\n"
           "4.List the title of boook specified by accesion number\n5.List of count of books\n"
           "6.list of books in the order of accession number\n7.Exit\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    switch (ch) {
    case 1:  for(;itr<size;itr++){
            lib[itr].accnum=itr+1;
            printf("enter title of book\n");
            scanf("%s",lib[itr].title);
            printf("enter the author name\n");
            scanf("%s",lib[itr].author);
            printf("enter the price of book\n");
            scanf("%d",&lib[itr].price);

        }
        break;
    case 2: for(it=0;it<size;it++){
            printf("the accesion number %d\n",lib[it].accnum);
            printf("title of book %s\n",lib[it].title);
            printf("the author name %s\n",lib[it].author);
            printf("the price of book %d\n",lib[it].price);

        }
        break;
    case 3:{ printf("enter the author name\n");
        scanf("%s",authorn);
        for(it=0;it<size;it++){
            cmp=strcmp(lib[it].author,authorn);
            if(cmp==0){
                printf("the accesion number %d\n",lib[it].accnum);
                printf("title of book %s\n",lib[it].title);
                printf("the author name %s\n",lib[it].author);
                printf("the price of book %d\n",lib[it].price);
            }
        }
    }
    break;
    case 4:
         {
            printf("enter the accession number\n");
            scanf("%d",&accnums);
           for(it=0;it<size;it++){
            if(lib[it].accnum==accnums){
                printf("the accesion number %d\n",lib[it].accnum);
                printf("title of book %s\n",lib[it].title);
                printf("the author name %s\n",lib[it].author);
                printf("the price of book %d\n",lib[it].price);
            }
           }
        }
        break;
    case 5: printf("Number books in library is %d\n",size);
        break;
    case 6:for(it=0;it<size;it++){
        printf("the accesion number %d\n",lib[it].accnum);
        printf("title of book %s\n",lib[it].title);
        printf("the author name %s\n",lib[it].author);
        printf("the price of book %d\n",lib[it].price);

        }
        break;
    case 7:exit(0);

    }
    }

    return 0;
}

