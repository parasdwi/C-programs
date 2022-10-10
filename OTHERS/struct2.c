#include<stdio.h>
#include<string.h>
struct employee 
{
    int ecode;
    char name[10];
    int salary;
};

int main()
{
    int i,n;
    printf("Enter the number the employee :");
    scanf("%d",&n);
    struct employee e[10];
    for (i=0;i<n;i++)
    {
        printf("Name of employee%d: ",i+1);
        scanf("%s",&e[i].name);
        printf("Salary of employee%d:",i+1);
        scanf("%d",&e[i].salary);
        printf("Ecode of employee%d:",i+1);
        scanf("%d",&e[i].ecode);
    }
    for (i=0;i<n;i++)
    {
        printf("Name of employee%d is :%s\n",i+1,e[i].name);
        printf("Salary is :%d\n",e[i].salary);
        printf("Ecode is :%d\n",e[i].ecode);
    }
    return 0;
}