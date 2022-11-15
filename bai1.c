#include <stdio.h>
#include <string.h>

int factor(int n); 
float func_a(int n);
int func_b(int n);
int func_c(int n);
long long func_d(int n);
double func_e(int n);
 
int main() {
 
    int n;
    char temp[10];
 
    do {
 
        do {
 
            printf("Please type your number : ");
            fgets(temp,sizeof(temp),stdin);
 
        } while ( sscanf(temp,"%d",&n) != 1);
 
       
 
    } while ( n <= 0 );
 
    printf("function a = %.2f\n",func_a(n));
    printf("function b = %d\n",func_b(n));
    printf("function c = %d\n",func_c(n));
    printf("function d = %d\n",func_d(n));
    printf("function e = %.2f\n",func_e(n));
 
    return 0;
 
}
 
float func_a(int n) {
 
    int i;
    float ans = 0;
    for ( int i = 1; i <= n; i++ ) {
 
        ans += (1.0)*i/2;
 
    }
 
    return ans;
 
}
 
int func_b( int n ) {
 
    int i;
    int ans = 0;
 
    for ( int i = 1; i <= n; i++ ) {
 
        ans += (2*i +1 );
 
    }
 
    return ans;
 
}
 
int factor( int n ) {
 
    if ( n != 1 )
        return n*factor(n-1);
   
    else
        return 1;
}
 
int func_c( int n ) {
 
    int i;
    int ans = 0;
 
    for ( i = 1; i <= n; i++ ) {
 
        ans += factor(i) + 1;
 
    }
 
    return ans;
 
}
 
long long func_d( int n ) {
 
    long long ans = 1;
    int i;
 
    for ( i = 1; i <= n; i++ ) {
 
        ans *= factor(i);
 
    }
 
    return ans;
 
}
 
double func_e( int n ) {
 
    double ans = 1;
    int i;
 
    for ( i = 1; i <= n; i++ ) {
 
        ans *= factor(i)*(1.0)*2/3;
 
    }
 
    return ans;
   
}
 

