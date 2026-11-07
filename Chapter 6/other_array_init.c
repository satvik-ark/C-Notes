#include <stdio.h>

int main(){

    // Hence we can mannually feed arrays
    int cgpa[] = {6,7,8};

    printf("These are your marks\n");

    for(int j = 0; j<3; j++){
        printf("%d\n", cgpa[j]);
    }
    return 0;
}