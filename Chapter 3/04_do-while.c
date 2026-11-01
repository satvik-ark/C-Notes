#include<stdio.h>
int main(){
    int i = 0;
    do
    {
        printf("This is my code number %d\n", i + 1);
        i++;
    } while (i<-1);

    return 0;
    
}

/*
This runs code then checks the condition, 
whereas, while first checks the condition then runs the code
 */