#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3};
    int *ptr = &arr[0];
    // or we can also write
    // int *ptr = arr;

    for(int i=0; i<3; i++){
        printf("The value at index %d is %d\n", i, *ptr);
        ptr++;
    }
    return 0;
}