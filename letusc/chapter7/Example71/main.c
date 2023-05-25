#include <stdio.h>


int main()
{
    /* int i = 2 ;
    switch ( i )
    {
    case 1 :
        printf ( "I am in case 1 \n" ) ;
    case 2 :
        printf ( "I am in case 2 \n" ) ;
    case 3 :
        printf ( "I am in case 3 \n" ) ;
    default :
        printf ( "I am in default \n" ) ;
    } */

   /* char c = 'h' ;
    switch ( c )
    {
    case 'v' :
        printf ( "I am in case v \n" ) ;
        break ;
    case 'a' :
        printf ( "I am in case a \n" ) ;
        break ;
    case 'x' :
        printf ( "I am in case x \n" ) ;
        break ;
    default :

        printf ( "I am in default \n" ) ;
    }
*/
    int i, j ;
    printf ( "Enter value of i" ) ;
    scanf ( "%d", &i ) ;
    switch ( i )
    {
        printf ( "Hello\n" ) ;
    case 1 :
        j = 10 ;
        break ;
    case 2 :
        j = 20 ;
        break ;
    }
    return 0;
}
