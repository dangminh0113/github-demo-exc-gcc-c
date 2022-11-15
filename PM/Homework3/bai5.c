#include <stdio.h>
#include <string.h>
 
void GCD(int n, int m);
 
int main() {
 
     
    int n,m;
    char temp[10],temp1[10];
    
    do {
 
        do {
 
            printf("Please type the number ! : ");
            fgets(temp,sizeof(temp),stdin);
 
        }   while (sscanf(temp,"%d",&n) != 1 );
   
    } while ( n <= 0 );
 
    do {
 
        do {
 
            printf("Please type the number ! : ");
            fgets(temp1,sizeof(temp1),stdin);
 
        }   while (sscanf(temp1,"%d",&m) != 1 );
 
    } while ( m <= 0 );

    GCD(n,m);
 
    return 0;
}
 
void GCD(int n, int m) {
 
   
    int temp3 = 0;
 
    if ( n >= m )
       
        temp3 = m;
   
    else
       
        temp3 = n;
 
    int result = 0;
 
    for ( int i = 1; i <= temp3; i++ ) {
 
        if ( ( m % i ) == 0 && ( n % i ) == 0 ) {
 
            result = i;
 
        }
 
    }
 
    if ( result > 0 )
       
        printf("The greatest common divisor of %d and %d is %d !",m,n,result);
   
 
}
