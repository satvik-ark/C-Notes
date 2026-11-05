#include<stdio.h>

int main(){

    int i = 22;
    int *j = &i; // j is a pointer pointing to i
    
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &j);

    printf("The value of address in j is %d\n", *j);
    printf("The value of address in j is %d\n", *(&j));

    return 0;
    
}

