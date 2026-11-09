
#include <stdio.h>

int main() {

    char st[30];

    // 1. gets() - Reads a multi-word string.
    // Unsafe: Does not check array boundaries.
    // Removed from C11. Never use in modern C.
    
    // gets(st);


    // 2. fgets() - Safely reads a multi-word string.
    // Syntax: fgets(array, size, stdin);
    // Reads at most size - 1 characters.
    // Automatically appends '\0'.
    // Retains '\n' if it fits in the array.

    printf("Enter a string: ");
    fgets(st, sizeof(st), stdin);


    // 3. puts() - Displays a string.
    // Automatically adds a newline at the end.

    printf("Your string is: ");
    puts(st);

    return 0;
}


// Example code for fgets()


#include <stdio.h>

int main() {

    char name[30];

    printf("Enter your full name: ");

    fgets(name, sizeof(name), stdin);

    printf("Your name is: ");
    puts(name);

    return 0;
}
