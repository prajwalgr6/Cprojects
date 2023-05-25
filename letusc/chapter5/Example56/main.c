#include <stdio.h>
/*Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
 There are 21 matchsticks.
 The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
 After the person picks, the computer does its picking.
 Whoever is forced to pick up the last matchstick loses the game.*/

int main()
{
    int ms=21,a;
    printf("total match stick is 21\n");
    while(ms!=0){
        printf("pick match stick 0 to 4");
        scanf("%d\n",&a);
        ms= ms-a;
        if(ms<=4){
            ms=ms-ms;

            printf("You loose\n");

        }
        else  {
            printf("computer choose 1\n");
                ms=ms-1;
        }
        printf("remaining is %d\n",ms);


    }
    return 0;
}
