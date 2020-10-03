#include<stdio.h>
int showdata(int id,int salary,char name[20]);
int main()
{
    int id,salary;
    char name[20];
    printf("Enter the information about employee\n");
    printf("Enter the id of employe\n");
    scanf("%d",&id);
    printf("Enter the salary of employe\n");
    scanf("%d",&salary);
    printf("Enter the name of employe\n");
    scanf("%s",&name);
    printf("**** Information about employee *****.\n");
    showdata(id,salary,name);

    return 0;
}
int showdata(int id ,int salary,char name[20]){
    printf("ID of employee is %d\n",id);
    printf("Salary of employee is %d\n",salary);
    printf("Name of the employee is %s\n",name);
}
