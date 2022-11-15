#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    int *arr;

    printf("Type the size of an array :");
    scanf("%d",&n);

    arr = calloc(n,sizeof(int));

    int i,j;

    for ( i = 0; i < n; i++ ) {

        printf("Type the %dth index of an array ! :",i);
        scanf("%d",&arr[i]);

    }

    int temp = 0;

    for ( i = 0; i < n; i++ ) {

        for ( j = i; j < n; j++ ) {

            if (arr[i] >= arr[j]){

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }

        }

    }

    for ( i = 0; i < n; i++ ) {

        printf(" %d ",arr[i]);

    }  

    return 0;

}