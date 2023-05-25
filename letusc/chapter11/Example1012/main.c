# include <stdio.h>
int main( )
{
    char c ;
    unsigned char d ;
    int i ;
    unsigned int j ;
    short int k ;
    unsigned short int l ;
    long int m ;
    unsigned long int n ;
    float x ;
    double y ;
    long double z ;
    printf("char uchar");
    scanf ( "%c %c", &c, &d ) ;
    printf ( "%c %c\n", c, d ) ;
    printf("int uint ");
    scanf ( "%d %u", &i, &j ) ;
    printf ( "%d %u\n", i, j ) ;
    printf("short u short");
    scanf ( "%d %u", &k, &l ) ;
    printf ( "%d %u\n", k, l ) ;
    printf("long ulong");
    scanf ( "%ld %lu", &m, &n ) ;
    printf ( "%ld %lu\n", m, n ) ;
    printf("float double ldauble");
    scanf ( "%f %lf %Lf", &x, &y, &z ) ;
    printf ( "%f %lf %Lf\n", x, y, z ) ;
}
