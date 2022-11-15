#include <stdio.h>
#include <stdlib.h>
void findarr_MinMax(int n, int arr[]);

int main() {

    int n;
    int *arr;
    
    printf("Choose the size of an array : ");
    scanf("%d",&n);
    
    arr = calloc(n,sizeof(int));

    int i;

    for ( int i = 0; i < n; i++ ) {
        
        printf("Type the %dth index of an array ! :",i);
        scanf("%d",&arr[i]);

    }

    findarr_MinMax(n,arr);

    free(arr);

    return 0;

}

void findarr_MinMax(int n, int arr[]) {

    int max = arr[0];
    int min = arr[0];   

    for ( int i = 1; i < n; i++ ) {

        if ( arr[i] >= max ) 
            max = arr[i];

    }

    for ( int i = 1; i < n; i++ ) {

        if (arr[i] < min ) 
            min = arr[i];

    }

    printf("The maximum value of array is %d\n",max);
    printf("The minimum value of array is %d\n",min);

}