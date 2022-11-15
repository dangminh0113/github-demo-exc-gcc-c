#include <stdio.h>
#include <math.h>
 
void perfect_number(int n);

int main() {
 
    int n;
 
    char tempc[10];
 
    do {
 
        do {
 
            printf("Type the number ! : ");
            fgets(tempc ,sizeof(tempc) ,stdin);
 
        } while (sscanf(tempc,"%d",&n) != 1);
 
    } while ( n <= 0 );
 
    perfect_number(n);
    
return 0;
 
}

void perfect_number(int n) {
 
    int sum = 0;
 
    for ( int i = 1; i <= n/2 ; i++) {
 
        if ( n % i == 0 )
            sum += i;
        if ( sum == n ) {
 
            printf("%d is a perfect number !!!",n);
        }
    }
 
    if ( sum != n )
        printf("%d is not a perfect number!!!",n);
 
}