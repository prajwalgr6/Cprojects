#include <stdio.h>
#include <string.h>

int main()
{
    char che[20],name[6][20]={"prajwal","amith","atharv","goapl","rajesh","parag"};
    printf("%s",name[5]);

    printf("Enter the name to check\n");
    scanf("%s",che);
    for(int i=0;i<6;i++){
        if(strcmp(name[i],che)==0){
            printf("user name is found\n");

            return 0;

        }

    }
    printf("user not found\n");
    return 0;
}
