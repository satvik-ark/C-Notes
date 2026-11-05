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

    int c = sum (a, b); // Function Calling
    printf("This is sum %d\n", c);

    return 0;
}


/* 

But why does this code prints the sum twice?

1) a = 5 and b = 6
2) sum(a, b) calls your function.
3) The function calculates 5 + 6 = 11.
4) Its printf() prints 11.
5) return x+y sends 11 back to main().
6) c stores 11.
7) The second printf() prints 11 again.

*/