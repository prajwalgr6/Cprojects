#include <stdio.h>
#include<string.h>
int main()
{
    char  *name[]={"parjwa","parag","rajesh","ramesh","srinivas","raman"};

    char *t;

    printf("original name is %s  %s\n",&name[2][0],&name[3][0]);

        t=name[2];
        name[2]=name[3];
        name[3]=t;

    printf("new name is %s  %s\n ",&name[2][0],&name[3][0]);

    return 0;
}

//int main()
//{
//    char name[][20]={"parjwa","parag","rajesh","ramesh","srinivas","raman"};

//    char t;
//    printf("original name is %s  %s\n",&name[2][0],&name[3][0]);
//    for(int i=0;i<20;i++){
//        t=name[2][i];
//        name[2][i]=name[3][i];
//        name[3][i]=t;
//    }
//    printf("new name is %s  %s\n ",&name[2][0],&name[3][0]);

//    return 0;
//}

