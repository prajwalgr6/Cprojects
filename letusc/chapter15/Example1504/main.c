# include <stdio.h>
#include <string.h>
int xstrlen(char *);

int main()
{
    char arr[]="Bamboozled",a[30]="Dambler",a1[30];
    int len1,len2;

    printf("by using strlen %llu\n",strlen(arr));
    printf("by using strlen %llu\n",strlen("Humpty Dumpty"));
    printf("by using strlwr %s\n",strlwr(arr));
    printf("by using strlwr %s\n",strupr(arr));
    strcat(a,arr);
    printf("by using strcat %s\n",a);
    strcpy(a1,a);
    printf("arr values %s\n",arr);
    printf("copy str %s\n",a1);
    len1 = xstrlen(arr);
    len2 = xstrlen("Humpty Dumpty");
    printf("string = %s length = %d\n",arr,len1);
    printf("string = %s length = %d\n","Humpty Dumpty",len2);
    return 0 ;
}
int xstrlen (char *s)
{
    int length=0;
    while(*s !='\0')
    {
        length++;
        s++;
    }
    return (length);
}
