#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1 , e2, e3;

    printf("Enter the Value of code\n : ");
    scanf("%d", &e1.code);

    printf("Enter the value of salary\n : ");
    scanf("%f", &e1.salary);

    printf("Enter the value of name\n : ");
    scanf("%s", &e1.name);

    printf("%d %f %s", e1.code, e1.salary, e1.name);

    return 0;
}