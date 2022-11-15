#include <stdio.h>
#include <stdlib.h>
 

void check_palindrome(int n);

int main() {
 
    int n;
 
    char tempc[10];
 
    do {
 
        do {
 
            printf("Type the number ! : ");
            fgets(tempc ,sizeof(tempc) ,stdin);
 
        } while (sscanf(tempc,"%d",&n) != 1);
 
    } while ( n <= 0 );
 
    check_palindrome(n);
 
    return 0;
 
}
void check_palindrome( int n ) {

    int r ,sum=0 ,temp;    
    temp=n;    

    while(n>0)    
    
    {    

        r=n%10;    
 
        sum=(sum*10)+r;    

        n=n/10;    

    }    

    if(temp==sum)    

        printf("palindrome number ");    

    else    

        printf("not palindrome");     
}   