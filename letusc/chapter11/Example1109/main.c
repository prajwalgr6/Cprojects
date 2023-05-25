# include <stdio.h>
int main( )
{
   register int i = 1 ;
    {
        register int j = 2 ;
        {
            register int k = 3 ;
            printf ( "%d ", k ) ;
            printf ( "%d\n", i ) ;
            printf ( "%d ", j ) ;
        }
        printf ( "%d ", j ) ;
    }
    printf ( "%d\n", i ) ;


    return 0 ;
}
