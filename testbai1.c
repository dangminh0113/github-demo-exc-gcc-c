#include <stdio.h>

int factor( int n );

int main() {

    int n = 10;

    printf("%d",factor(n));

    return 0;

}

int factor( int n ) {
 
    if ( n != 1 )
        return n*factor(n-1);
   
    else
        return 1;
}