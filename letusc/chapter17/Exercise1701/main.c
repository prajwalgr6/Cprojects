    #include <stdio.h>
    #include<stdlib.h>
    struct student{
        int roll,year;
        char name[30],dept[30],course[30];
    };
    void display(struct student * ,int,int);
    void display2(struct student *,int,int);
    int main()
    {
        int n,choice;
        printf("enter the number students\n");
        scanf("%d",&n);
        struct student b[n];
        int i,y,rol;

        for(i=0;i<n;i++){
        printf("enter the roll number\n ");
        scanf("%d",&b[i].roll);
        printf("enter the name\n");
        scanf("%s",b[i].name);
        printf("enter the year\n");
        scanf("%d ",&b[i].year);
        printf("enter the department\n");
        scanf("%s",b[i].dept);
        printf("enter the course\n");
        scanf("%s",b[i].course);

        }
        printf("1.check by year\n 2.check by roll no");
        scanf("%d",&choice);
            switch(choice){
            case 1:printf("enter year");
                   scanf("%d",&y);
                   for(i=0;i<n;i++){
                   display(&b[i],y,n);
                }
                   break;
            case 2:printf("enter the roll number");
                   scanf("%d",&rol);
                   for(i=0;i<n;i++){
                   display2(&b[i],rol,n);
                   }
                   break;
            default:printf("enter the valid id");


            }


        return 0;
        }
        void display(struct student *b, int year,int n){
        int i;
            for(i=0;i<n;i++){
                if(b[i].year==year){
                printf("%d is joined in this years %s\n",b[i].year,b[i].name);
                }
            }
        }
        void display2(struct student *b,int roll,int n){
        int i;
        for(i=0;i<n;i++){
            if(b[i].roll==roll){
               printf("%d roll number\n name is %s \ndepartment is %s \n course is %s\n year join is %d"
                ,b[i].roll,b[i].name,b[i].dept,b[i].course,b[i].year);
            }
        }
    }

