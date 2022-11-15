#include <stdio.h>
#include <math.h>
#include <string.h>
 
void swap_numb(int n);

int main()
 
{
    int n, first, last, digits, swapped;
   
    char tempc[10];
 
    do {
 
        do {
 
            printf("Type the number ! : ");
            fgets(tempc ,sizeof(tempc) ,stdin);
 
        } while (sscanf(tempc,"%d",&n) != 1);
 
    } while ( n <= 0 );
   
 
    swap_numb(n);
 
    return 0;
}


void swap_numb(int n) {
 
    int first, last, digits, swapped;
 
    last = n % 10;
 
    digits = (int)log10(n);
 
    first = (int)(n / pow(10, digits));
    swapped  = last;
    swapped *= (int) round(pow(10, digits));
    swapped += n % ((int)round(pow(10, digits)));
    swapped -= last;
    swapped += first;
   
    printf("After Swapping : %d", swapped);

}