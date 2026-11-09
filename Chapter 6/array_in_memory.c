#include <stdio.h>

int main(){

    // This tells that elements are stored in contigious memory boxes
     int marks[5];

     for(int i=0; i<5; i++){
         scanf("%d", &marks[i]);
     }
     for(int i=0; i<5; i++){
         printf("The address of marks at %d place is %d\n", i, &marks[i]);
     }
    return 0;
}