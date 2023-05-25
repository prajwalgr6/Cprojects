#include <stdio.h>

int main()
{
    int i =25;
    int j =25;
    int *pi = &i, *pj = &j;
    *pj = j + 5;
    j = *pj + 5 ;
    pj = pj ;
    *pi = i + j ;

    printf("%d\n",&i);
    printf("%d\n",&j);
    printf("%d\n",pj);
    printf("%d\n",*pj);
    printf("%d\n",i);
    printf("%d\n",pi);
    printf("%d\n",*pi);
    printf("%d\n",(pi+2));
    printf("%d\n",(*pi+2));
    printf("%d\n",*(pi+2));
}
