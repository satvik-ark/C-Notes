#include<stdio.h>

int sum(int*, int*);

// Sum should change the value of a
int sum(int *a, int *b){
    *a = 10;
    return *a + *b;
}

int main(){
    int a = 3, b = 56;

    printf("The sum of %d and %d is %d\n", a, b, sum(&a,&b));
    printf("The value of a is %d\n", a);  // here we can see that the function actually did changed the main function.

    return 0;
}