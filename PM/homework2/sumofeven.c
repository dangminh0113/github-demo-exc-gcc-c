#include <stdio.h>

int main() {

    int n;

    printf("Select your number !:")
    scanf("%d",&n);

    while (n < 1) {
        printf("You chose the wrong input, please change the input : ");
        scanf("%d",&n);
    }

    int sum = 0;

    while ( n > 1) {

        if ( n % 2 == 0) {
            sum+=n;
        }
        n--;
    }
    
    printf("Sum of even numbers from 1 to n by using while loop is: %d\n",sum);

    scanf("%d",&n);

    while (n < 1) {
        printf("You chose the wrong input, please change the input : ");
        scanf("%d",&n);
    }

    int sum2 = 0;

    for ( int i = 1; i <= n; i++) {

        if ( i %2 == 0) {

            sum2 += i;
        }
    }
    printf("Sum of even numbers from 1 to n by using for loop is: %d\n",sum2);
    
    
    scanf("%d",&n);

    while (n < 1) {
        printf("You chose the wrong input, please change the input : ");
        scanf("%d",&n);
    }

    int sum3 = 0;
    int index2 = 0;
    
    do { 

        sum3 += index2;
        index2 += 2;
    
    } while (index2 <= n);

    
    printf("Sum of even numbers from 1 to n by using do-while loop is: %d",sum3);

    return 0;

    
}