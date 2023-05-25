#include <stdio.h>
/*Write a program to find the grace marks for a student using switch.
The user should enter the class obtained by the student and the
number of subjects he has failed in. Use the following logic:
 If the student gets first class and the number of subjects he
failed in is greater than 3, then he does not get any grace.
Otherwise the grace is of 5 marks per subject.
 If the student gets second class and the number of subjects he
failed in is greater than 2, then he does not get any grace.
Otherwise the grace is of 4 marks per subject.
 If the student gets third class and the number of subjects he
failed in is greater than 1, then he does not get any grace.
Otherwise the grace is of 5 marks */

int main()
{
    int c,f;
    while(1){
        printf("enter the class \n1.first class \n 2.second class\n3.third class\n 4.exit");
        scanf("%d",&c);


        switch(c){

        case 1: printf("enter number of subjects failed");
            scanf("%d",&f);

            if(f>3){
                printf(" he does not get any grace\n");
            }
            else{
                printf("the grace is of 5 marks per subject\n");
            }
            break;
        case 2:        printf("enter number of subjects failed");
            scanf("%d",&f);
            if(f>2){
                printf(" he does not get any grace\n");
            }
            else{
                printf("the grace is of 4 marks per subject\n");
            }
            break;
        case 3:        printf("enter number of subjects failed");
            scanf("%d",&f);
            if(f>1){
                printf(" he does not get any grace\n");
            }
            else{
                printf("the grace is of 5 marks per subject\n");
            }
            break;
        default:
            exit(1);
            break;
        }



    }

    return 0;
}
