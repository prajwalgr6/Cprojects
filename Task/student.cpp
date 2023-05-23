#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student {
    char name[20];
    char branch[20];
    int id;
    int year;
    int mobileno;
};
FILE *fp;
void insertstud(struct student *s)
{
 fp=fopen("C:/Training/student.txt","a+");
    rewind(fp);
    int count=0;

    while(fscanf(fp,"%d %s %s %d %d",&s->id,s->name,s->branch,&s->year,&s->mobileno)!=EOF){
        count++;
    }
    printf("Total student records %d\n",count);
    if(count<=100){

        s->id=count+1;     
        printf("Enter name \n");
        scanf("%s",s->name);
        printf("enter Branch\n");
        scanf("%s",s->branch);
        printf("Enter year\n");
        scanf("%d",&s->year);
        printf("Enter Mobile no\n");
        scanf("%d",&s->mobileno);
        fprintf(fp,"%d %s %s %d %d\n",s->id,s->name,s->branch,s->year,s->mobileno);
    }
    fclose(fp);
}


void studentinfo(){
fp=fopen("C:/Training/student.txt","a+");
    rewind(fp);
    char var[50];

    while( fgets(var, 50 ,fp) != NULL )
    {
        puts(var);
    }
    fclose(fp);

}
void updateinfo(struct student *s)
{
    FILE *fp,*fs;

    fp=fopen("C:/Training/student.txt","r+");
    fs=fopen("C:/Training/temp.txt","w+");

    int id;
    printf("enter the Id\n");
    scanf("%d",&id);

    if(fp==NULL){
        printf("Inavalid file open\n");
        exit(0);
    }
    if(fs==NULL){
        printf("Inavalid file open\n");
        exit(0);
    }
    while(fscanf(fp,"%d %s %s %d %d",&s->id,s->name,s->branch,&s->year,&s->mobileno)!=EOF){

        if(s->id==id){
            printf("Enter name to update\n");
            scanf("%s",s->name);
            printf("enter Branch\n");
            scanf("%s",s->branch);
            printf("Enter year\n");
            scanf("%d",&s->year);
            printf("Enter Mobile no\n");
            scanf("%d",&s->mobileno);
        }
        fprintf(fs,"%d %s %s %d %d\n",s->id,s->name,s->branch,s->year,s->mobileno);

    }
    rewind(fp);
    rewind(fs);

    while(fscanf(fs,"%d %s %s %d %d",&s->id,s->name,s->branch,&s->year,&s->mobileno)!=EOF){

        fprintf(fp,"%d %s %s %d %d\n",s->id,s->name,s->branch,s->year,s->mobileno);
    }
    fclose(fp);
    fclose(fs);
}
void deleteinfo(struct student *s){

    FILE *fp,*fs;

    fp=fopen("C:/Training/student.txt","r+");
    fs=fopen("C:/Training/temp.txt","w+");

    int id;
    printf("enter the Id\n");
    scanf("%d",&id);

    if(fp==NULL){
        printf("Inavalid file open\n");
        exit(0);
    }
    if(fs==NULL){
        printf("Inavalid file open\n");
        exit(0);
    }

    while(fscanf(fp,"%d %s %s %d %d",&s->id,s->name,s->branch,&s->year,&s->mobileno)!=EOF){

        if(s->id!=id){
            fprintf(fs,"%d %s %s %d %d\n",s->id,s->name,s->branch,s->year,s->mobileno);
        }
    }

    fclose(fp);
    fclose(fs);

    fs=fopen("C:/Training/temp.txt","r+");
    fp=fopen("C:/Training/student.txt","w+");
    while(fscanf(fs,"%d %s %s %d %d",&s->id,s->name,s->branch,&s->year,&s->mobileno)!=EOF)
    {
        fprintf(fp,"%d %s %s %d %d\n",s->id,s->name,s->branch,s->year,s->mobileno);
    }
    fclose(fp);
    fclose(fs);

}
