#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);

    if ( n <= 0 ) {
        
        printf("You chose the wrong input, please change the input: ");
        scanf("%d",&n);
    }

    while ( n != 0) {
        
        printf("%d",n%2);

        n = n/2;
    }

    return 0;
}