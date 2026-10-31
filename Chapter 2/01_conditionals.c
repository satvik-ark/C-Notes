#include<stdio.h>

int main(){
    int a = 6, b;
    printf("Enter a number: ");
    scanf("%d",&b);

    if(b>10 || b<1){ 
        printf("Please write a number ben 1 to 10");
    }else if (b>a){ 
        printf("Try a smaller numebr");
    }else if (b<a){ 
        printf("Try a bigger nummber");
    }else{
        printf("You are right !!!");
    }
    
    return 0;   
}