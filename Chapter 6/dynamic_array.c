#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Write a number: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));
    for(int i = 1; i<n; i++){
        
    }
    printf("%d", *arr);
    
    return 0;
}