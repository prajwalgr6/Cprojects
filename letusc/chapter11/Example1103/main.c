#include <stdio.h>

//int main( )
//{
//    float a = 13.5 ;
//    double b = 13.5 ;
//    printf ( "%f %lf\n", a, b ) ;
//    return 0 ;
//}
//int main( )
//{
//    float a = 13.5 ;
//    double b = 13.5 ;
//    printf ( "%f %lf\n", a, b ) ;
//    return 0 ;
//}

int i = 0 ;
void val( ) ;
int main( )
{
    printf ( "main's i = %d\n", i ) ;
    i++ ;
    val( ) ;
    printf ( "main's i = %d\n", i ) ;
    val( ) ;
    return 0 ;
}
void val( )
{

                 i = 100 ;
    printf ( "val's i = %d\n", i ) ;
                 i++;
}
