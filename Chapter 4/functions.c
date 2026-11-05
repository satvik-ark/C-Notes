#include<stdio.h>

//Fuction Prototype
int sum(int, int);

// Function Defination
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;

}

int main(){

    int a = 5;
    int b = 6;

    sum (a, b); // Function Calling

    return 0;
}