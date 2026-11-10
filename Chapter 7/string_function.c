#include <stdio.h>
#include <string.h>

int main(){
    
    char st[] = "Satvik";
    char s1[30] = "Satvik";
    char s2 [30] = " Bhai";

    char target [30];
    strcpy(target, st);   // This copies the st into the target

    printf("%s\n", target);

    strcat(s1, s2);
    printf("%s", s1);    // This concatinates s2 into s1
    return 0;
}
