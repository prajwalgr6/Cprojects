#include <stdio.h>


int main()
{
    int w;
    printf("enter the boxers weight class");
    scanf("%d",&w);
    if(w<115){
        printf("Flyweight");
    }
    else if(w>=115 && w<=121){
        printf("Bantamweight");
    }
    else if(w>=122 && w<=153){
        printf("Featherweight");
    }
    else if(w>=154 && w<=189){
        printf("Middleweight");
    }
    else if(w>=190){
        printf("Heavyweight");
    }


    return 0;
}
