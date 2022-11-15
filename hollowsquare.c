#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);

    for ( int i = 0; i < n; i++) {

        for ( int j = 0; j < n; j++ ) {

            if ( i == 0 || i == ( n - 1 ) ) {
                printf("*");
                
                if ( j == ( n - 1 ) )
                    printf("\n");
            
            }

            else if ( j == 0 || j == ( n - 1 ) ) { 
                printf("*");
\0
                if ( j == ( n - 1 ) ) 
                    printf("\n");
            }


            else printf(" ");


        }

    }

    printf("\n");

    for ( int k = 0; k < n; k++ ) {

        for ( int l = 0; l < n; l++ ) {

            if ( k < n ) {

                printf("*");

                if ( l == ( n - 1 ) ) 
                    printf("\n");
            }

        }
    }

    printf("\n");

    for ( int i = 0; i < n; i++ ) {

        for ( int j = 0; j < n; j++ ) {

            if ( i >= j ) {
                
                printf("*");

                if ( j == i ) {

                    printf("\n");
                }
            }

        }
    }


    return 0;

}