# include <stdio.h>
//int main( )
//{
//static int count = 5 ;
//printf ( "count = %d\n", count-- ) ;
//if ( count != 0 )
//main( ) ;

//return 0 ;
//}

//int g ( int ) ;
//int main( )
//{
//int i, j ;
//for ( i = 1 ; i < 5 ; i++ )
//{
//j = g ( i ) ;
//printf ( "%d\n", j ) ;
//}
//return 0 ;
//}
//int g ( int x )
//{
//static int v = 1 ;
//int b = 3 ;
//v += x ;
//return ( v + x + b ) ;
//}
void func( );
int main( )

{
func( ) ;
func( ) ;
return 0 ;
}
void func( )
{
auto int i = 0 ;
register int j = 0 ;
static int k = 0 ;
i++ ; j++ ; k++ ;
printf ( "%d % d %d\n", i, j, k ) ;
}
