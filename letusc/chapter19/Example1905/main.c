#include <stdio.h>

int main()
{
    FILE *fp;
    struct employee{
        char name[40];int age;float bs;
    };
    struct employee e;
    char ch='Y';
    fp=fopen("C:/Training/Let Us C/chapter19/Example1905/file5.txt","a+");
    while(ch=='Y')
    {
        printf("enter the name ,age ,salary");
        scanf("%s %d %f",e.name,&e.age,&e.bs);
        fprintf(fp,"%s %d %f\n",e.name,e.age,e.bs);
        printf("Another record\n");
        ch=fgetchar();
    }
    fclose(fp);
    fp=fopen("C:/Training/Let Us C/chapter19/Example1905/file5.txt","r");
    while(fscanf(fp,"%s%d%f",e.name,&e.age,&e.bs)!=EOF){
        printf("%s%d%f\n",e.name,e.age,e.bs);
    }
    fclose(fp);

    ch='Y';
    fp=fopen("C:/Training/Let Us C/chapter19/Example1905/file6.txt","wb");
    while(ch=='Y')
    {
        printf("enter the Name ,Age and Salary\n");
        scanf("%s%d%f",e.name,&e.age,&e.bs);
        fwrite(&e,sizeof(e),1,fp);
        printf("another record");
        ch=fgetchar();
       // printf("getchar output : %d\n",fgetchar());
    }
    fclose(fp);
    fp=fopen("C:/Training/Let Us C/chapter19/Example1905/file6.txt","rb");
    while(fread(&e,sizeof(e),1,fp)==1){
        printf("%s\n%d\n%f\n",e.name,e.age,e.bs);
    }
    fclose(fp);
    return 0;
}
