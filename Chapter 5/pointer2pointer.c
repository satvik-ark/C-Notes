#include<stdio.h>
int main(){

    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("value of i is %d\n", i);
    printf("value of i is %d\n", *j);
    printf("value of i is %d\n", **k);
    printf("value of i is %d\n", *(&j));
    printf("value of i is %d\n", ***(&k));
    printf("value of i is %d\n", *(&i));
    printf("value of i is %d\n", **(&j));
}