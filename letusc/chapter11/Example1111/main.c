# include <stdio.h>
 int k = 3 ;
int main( )
{
    register int i = 1 ;
    {
        register int j = 2 ;
        {
            printf ( "%d ", k ) ;
            printf ( "%d\n", i ) ;
            printf ( "%d ", j ) ;
        }
        printf ( "%d ", j ) ;
    }
    printf ( "%d\n", i ) ;
    printf ( "%d ", k ) ;


    return 0 ;
}
