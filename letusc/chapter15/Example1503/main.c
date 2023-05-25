 #include <stdio.h>

int main()
{
    char name[20];
    printf("enter your full name");

    gets(name);
    puts("hello ");
    puts(name);
//    scanf("%s",&name);
//    printf("Hello %s",name);
    return 0;
}
