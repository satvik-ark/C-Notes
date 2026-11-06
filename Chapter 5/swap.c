#include<stdio.h>

void swap(int*, int*);

void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c; 
}

int main(){
    int a = 4;
    int b = 9;
    swap(&a,&b);

    printf("Now The value of a is %d and the value of b is %d", a, b);

    return 0;
}