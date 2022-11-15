#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    char c[25];

    fgets(c,25,stdin);
    c[strlen(c)-1] = '\0';
    
    printf("%s",c);

    double a = 68.0;
    double b = 32;
    double e = exp(32-pow(3,4));
    double d = sqrt(9) + (sqrt(2)+pow(3,exp(9)))/(3*3);
    d = round(d);
    e = ceil(e);
    double g = fabs(-100);

    printf("%.2f %.2f %.2f %.2f \n",a,b,e,d);
    printf("%.2f \n",g);
    
    int n;
    scanf("%d", &n);

    if ( scanf("%d",&n) != 1 ) {

        printf("FALSE");
    } else if (scanf("%d",&n) == 1) {

        printf("TRUE");
    }

    int mssv;
    int temp = 0;
    int temp2 = 0;

    printf("Please type your ID for caculating ! : ");
    scanf("%d",&mssv);

    int count[9];

    for ( int i = 0; i < 10; i++) {
        count[i] = 0;
    }

    while ( mssv != 0 ) {
        temp = mssv % 10;    
        switch (temp) {
            
            case 0 : count[0] += 1; break;
            
            case 1 : count[1] += 1; break;
            
            case 2 : count[2] += 1; break;
            
            case 3 : count[3] += 1; break;
            
            case 4 : count[4] += 1; break;
            
            case 5 : count[5] += 1; break;
            
            case 6 : count[6] += 1; break;
            
            case 7 : count[7] += 1; break;
            
            case 8 : count[8] += 1; break;
            
            case 9 : count[9] += 1; break;
        }
    
    mssv = mssv/10;
    
    }

    for ( int j = 0; j < 10; j++ ) {

        if ( count[j] > 0 ) {

            printf("%d =  %d \n",j,count[j]);
        }
    }

    return 0;
}
