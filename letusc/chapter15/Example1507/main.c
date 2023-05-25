#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
int size;
int pos = 0,num = 0,itr=0;

printf("eneter the string size");
scanf("%d",&size);
char a[size];
printf("enter the string");
scanf("%s",&a);
printf("%s\n",a);
printf("enter the position and number of elements to extract");

scanf("%d %d",&pos,&num);

itr=pos+num;
if(itr>size){
    printf("improper input");
}
else{
for(int i=pos;i<itr;i++){
    printf("%c",a[i]);
}
printf("\n");
}

return 0;
}
