#include <stdio.h>
#include<math.h>
/*Write a program to generate all Pythogorean Triplets with side
length less than or equal to 30*/

int main()
{
    printf("Hello World!\n");
    for(int x=0;x<=15;x++){
        for(int y=0;y<=15;y++){
            for(int z=0;z<=15;z++){

                if(pow(x,2)+pow(y,2)==pow(z,2)){
                    printf("Pythogorean Triplet %d,%d and %d\n ",x,y,z);

                }
            }
        }
    }
    return 0;
}
