#include <stdio.h>

int main()
{
    int d,m;
    printf("Enter the Date and Month");
    scanf("%d %d",&d,&m);

    if((d>=22 && m==12) || (d<=19 && m==1)){
        printf("Capricorn");
    }
    else if((d>=20 && m==1) || (d<=17 && m==2)){
        printf("Aquarius");
    }
    else if((d>=18 && m==2) || (d<=19 && m==3)){
        printf("Pisces");
    }
    else if((d>=20 && m==3) || (d<=19 && m==4)){
        printf("Aries");
    }
    else if((d>=20 && m==4) || (d<=20 && m==5)){
        printf("Taurus");
    }
    else if((d>=21 && m==5) || (d<=20 && m==6)){
        printf("Gemini");
    }
    else if((d>=21 && m==6) || (d<=22 && m==7)){
        printf("Cancer");
    }
    else if((d>=23 && m==7) || (d<=22 && m==8)){
        printf("Leo");
    }
    else if((d>=23 && m==8) || (d<=22 && m==9)){
        printf("virgo");
    }
    else if((d>=23 && m==9) || (d<=22 && m==10)){
        printf("Libra");
    }
    else if((d>=23 && m==10) || (d<=21 && m==11)){
        printf("Scorpio");
    }
    else if((d>=22 && m==11) || (d<=21 && m==12)){
        printf("Sagittarius");
    }



    return 0;
}
