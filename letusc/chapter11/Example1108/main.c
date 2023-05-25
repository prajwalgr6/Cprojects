# include <stdio.h>
int main( )
{
    auto int i = 1 ;
    {
        auto int j = 2 ;
        {
            auto int k = 3 ;
            printf ( "%d ", k ) ;
             printf ( "%d\n", i ) ;
             printf ( "%d ", j ) ;
        }
        printf ( "%d ", j ) ;
    }
    printf ( "%d\n", i ) ;

    return 0 ;
}
