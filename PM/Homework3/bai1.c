#include <stdio.h>
 
int sumN(int n);
int main() {
    
    int n;
    
    printf("Please type the number !: ");
    scanf("%d",&n);
 
    printf("The sum of natural number from 1 to N is %d ",sumN(n));
 
    return 0;
 
}

int sumN( int n ) {
 
    int sum = 0;
 
    for ( int i = 1; i <= n; i++ ) {
 
        sum += i;
 
    }
 
    return sum;
 
}
 