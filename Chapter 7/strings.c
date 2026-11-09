//Strings are nothing but 1-D caharacter array terminated by a null character (\0)

#include <stdio.h>

int main(){
    char st[] = {'A', 'R', 'K','\0'};

    for(int i = 0; i < 3; i++)
    {
        printf("%c", st[i]);
    }
    
    
    // Or we have another simpler way of writing strings

    char str[] = "ARK";
    printf("\n%s", str);
    return 0;
