#include <stdio.h>

int main() {

    int n;

    scanf("%d",&n);

    if ( n <= 0 ) {
        
        printf("You chose the wrong input, please change the input: ");
        scanf("%d",&n);
    
    }

    int sum = 0;

    while ( n > 0) {
        sum += n%10;
        n = n/10;
    }

    printf("The sum of all digits of a number is: %d",sum);

    return 0;
}