#include<stdio.h>
int main(){

    for(int i=0; i<8; i++){
        if(i==5){
            //break;         // We use break when we need to come out of the loop at an event.
            //continue;      // We use continue when we want to skip a particular event from the loop.
        }
        
        printf("%d\n", i);
    }

    printf("We are out of loop");

    return 0;

}