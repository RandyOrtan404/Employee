#include<stdio.h>
int showdata(int id,int salary);
int main()
{
    int id,salary;
    printf("Enter the information about employee\n");
    printf("Enter the id of employe\n");
    scanf("%d",&id);
    printf("Enter the salary of employe\n");
    scanf("%d",&salary);
    printf("**** Information about employee *****.\n");
    showdata(id,salary);

    return 0;
}
int showdata(int id ,int salary){
    printf("ID of employee is %d\n",id);
    printf("Salary of employee is %d\n",salary);
}
