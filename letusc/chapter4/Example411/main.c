 #include <stdio.h>

int main()
{
    float b,w,h;
    printf("enter the weight and height");
    scanf("%f %f",&w,&h);
    b=w/h*h;
    if(b<15){
        printf("Starvation");
    }
    else if(b>=15.1 && b<=17.5){
        printf("Anorexic");
    }
    else if(b>=17.6 && b<=18.5){
        printf("under weight");
    }
    else if(b>=18.6 && b<=24.9){
        printf("Ideal");
    }
    else if(b>=25 && b<=25.9){
        printf("over weight");
    }
    else if(b>=26 && b<=30.9){
        printf("Obese");
    }
    else if(b>=40){
        printf("Morbidly Obese");
    }
    return 0;
}
