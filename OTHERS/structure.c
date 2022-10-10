#include<stdio.h>
#include<string.h>
struct employee
{
    int salary;
    int e_code;
    char name[10];
};

int main()
{

    struct employee e1;
    strcpy(e1.name,"Paras");
    e1.e_code=23;
    e1.salary=50000000;
    printf("name is :%s ",e1.name);
    return 0;
}