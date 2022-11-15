#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    if ( n < 1) {

        printf("You chose the wrong input, please change the input: ");
        scanf("%d",&n);
    }
    int count = 0;
    int prime;
    for (int i = 2; i <= n; i++) {

            prime = 1;
        for ( int j = 2; j <= (i-1); j++) {

            if (i % j == 0) {

                prime = 0;
                break;
            }
        }
        
        if ( prime == 1) {

            printf("%d ",i);
        }
    }
    return 0;
}