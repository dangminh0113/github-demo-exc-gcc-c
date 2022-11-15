#include <stdio.h>
#include <stdlib.h>

int main() {

    int n,k;
    int *arr;

    printf("Type the size of an array : ");
    scanf("%d",&n);

    arr = calloc(n,sizeof(int));

    printf("Type the key value : ");
    scanf("%d",&k);

    int i;

    for ( i = 0; i < n; i++ ) {

        printf("Type the %dth index of an array :",i);
        scanf("%d",&arr[i]);

    }

    for ( int i = 0; i < n; i++ ) {

        if ( arr[i] == k ) {

            printf("The first element in which found is in %dth index !",i);

            return 0;
        }

    }

    printf("There is no identical element which can be found");

    return 0;

}