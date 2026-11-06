#include<stdio.h>

int sum(int, int);

int sum(int a, int b){
    return a + b;
}

int main(){
    int a = 3;
    int b = 56;

    printf("The sum of %d and %d is %d", a, b, sum(a,b));

    return 0;
}

// Here, we are giving proper integer values as argument...
// in other words we are giving a copy of a and b into the function
// the function can't change the value of a and b in the main() program...