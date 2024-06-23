#include<stdio.h>


int main(void)
{
    int n ;
    scanf( "%d", &n ) ;


    int a[n] , *p = &a[n] ;


    for ( p = a ; p < a+n ; p++ )
    {
        scanf( "%d", p ) ;
        *p *= *p ;
        printf( "%d", *p ) ;
        if ( p != a+n-1 )
        {
            printf( " " ) ;
        }
    }
     
    return 0 ;
}
