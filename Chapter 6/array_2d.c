#include <stdio.h>

int main(){
    int arr[2][3];

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Enter the value for index: ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("This the value of index arr[%d][%d] is %d\n ",i, j, arr[i][j]);
        }
    }
    return 0;
}