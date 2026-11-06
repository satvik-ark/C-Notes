#include<stdio.h>

int main(){

    char i = 'A';
    char *j = &i; // j is a pointer pointing to i (where j is a charater pointer)

    float k = 2.342;
    float *k1 = &k; // And here, k1 is a float pointer pointing towards k
    
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of i is %p\n", &j);

    printf("The value of address in j is %d\n", *j);
    printf("The value of address in j is %d\n", *(&j));

    return 0;
    
}

