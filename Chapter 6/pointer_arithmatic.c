#include <stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;

    printf("The adddress of a is %u\n", ptr);
    printf("The adddress of a is %u\n", &a);
    ptr++;
    printf("The adddress of a is %u\n", ptr);

    return 0;
}

