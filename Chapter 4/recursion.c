#include<stdio.h>

// Function Prototype
int factorial(int);

// Function Defination
int factorial(int a){
    if(a==1 || a==0){
        return 1;
    }
    return a * factorial(a-1);
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if(a<0){
        printf("Please try a positive number");
    }

    printf("Factorial of %d is %d\n", a, factorial(a));

    return 0;
}