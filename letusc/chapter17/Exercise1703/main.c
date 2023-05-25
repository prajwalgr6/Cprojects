#include <stdio.h>
#include<stdlib.h>

struct cric{
    char name[30];
    int age;
    int match;
    int average;
};
int cmpfunc (const void * a, const void * b);

int main()
{
    int itr,num;
    printf("enter the number cricketers");
    scanf("%d",&num);

    struct cric c[num];
    for(itr=0;itr<num;itr++){
        printf("enter the criketer%d\n name\n",itr+1);
        scanf("%s",&c[itr].name);
        printf("enter the age\n");
        scanf("%d",&c[itr].age);
        printf("enter number matches played");
        scanf("%d",&c[itr].match);
        printf("enter average runs");
        scanf("%d",&c[itr].average);
    }
    qsort(c, num, sizeof(struct cric), cmpfunc);

    for(itr=0;itr<num;itr++)
    {
        printf("\nThe name: %s\n",c[itr].name);
        printf("The age: %d\n",c[itr].age);
        printf("The Number of matches: %d\n",c[itr].match);
        printf("The avg matches : %d\n",c[itr].average);
    }

}
int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}
