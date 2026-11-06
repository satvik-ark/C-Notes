// This code enters marks in the array and then prints em down

#include<stdio.h>
int main (){

    int marks[5], i = 0;

    for(i = 0; i<5; i++){
        scanf("%d", &marks[i]);
    }

    printf("These are your marks\n");

    for(int j = 0; j<i; j++){
        printf("%d\n", marks[j]);
    }

    return 0;
}