#include <stdio.h>
#include "student.cpp"
#define INSERT 1
#define DISPLAY 2
#define UPDATE 3
#define DELETE 4
#define EXIT 5
int main()
{
    int ch;
    struct student s;
    FILE *fp;


    printf("student information\n");

    while(1){

        printf("Enter Your choice\n");
        printf("1.Enter the student detail\n"
               "2.Print student details\n"
               "3.Update student detail\n"
               "4.Delete student record\n"
               "5.Exit\n");

        scanf("%d",&ch);

        switch (ch) {
        case INSERT :insertstud(&s);
            break;
        case DISPLAY:studentinfo();
            break;
        case UPDATE:updateinfo(&s);
                break;
        case DELETE:deleteinfo(&s);
                break;
        case EXIT:
            exit(1);
        }

    }
    return 0;
}


