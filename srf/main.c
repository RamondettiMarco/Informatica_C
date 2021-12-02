#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
 int n = 10;
 int bar(int u) {
 n= n-1;
 return u+n ;
 }
 int main ( ) {
 int i , k ;



 for ( i =0; i<n ; i++) {
 k = bar ( k ) ;
 printf( "%d_%d\n" , i , k ) ;
 }
 return 0 ;

}
