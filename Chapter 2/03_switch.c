#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("This is case 1");
        break;
        case 2:
        printf("This is case 2");
        break;
        case 3:
        printf("This is case 3");
        break;
        case 4:
        printf("This is case 4");
        break;
        default:
        printf("Nothing Matched !!");
    }

    return 0;
}

/* Here, if we don't use break statement,
   then all the case below the matched case
   will start executing. */