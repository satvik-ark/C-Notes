#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[30];
};

int main()
{

    struct employee e1, e2;

    strcpy(e1.name, "Satvik");
    e1.code = 4001;
    e1.salary = 100000;

    printf("%d\n %.2f\n %s\n", e1.code, e1.salary, e1.name);

    return 0;
}