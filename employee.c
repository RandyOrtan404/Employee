#include<stdio.h>
int showdata(int id,int salary,char name[20],char DOB[100]);
int main()
{
    int id,salary;
    char name[20],DOB[100];
    printf("Enter the information about employee\n");
    printf("Enter the id of employe\n");
    scanf("%d",&id);
    printf("Enter the salary of employe\n");
    scanf("%d",&salary);
    printf("Enter the name of employe\n");
    scanf("%s",&name);
    printf("Enter the DOB in formate of DD/MM/YYYY \n");
    scanf("%s",&DOB);
    printf("**** Information about employee *****.\n");
    showdata(id,salary,name,DOB);

    return 0;
}
int showdata(int id ,int salary,char name[20],char DOB[100]){
    printf("ID of employee is %d\n",id);
    printf("Salary of employee is %d\n",salary);
    printf("Name of the employee is %s\n",name);
    printf("employee of DOB %s\n",DOB);
}
