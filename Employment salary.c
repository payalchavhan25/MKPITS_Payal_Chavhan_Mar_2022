#include<stdio.h>
#include<conio.h>
int main()
{
char id[10];
int hour;
double value,salary;
printf("input the employees ID(max.10chars):");
scanf("%s",&id);
printf("input the working hours:");
scanf("%d",&hour);
printf("salary amount /hours:");
scanf("%f",&value);
salary=value*hour;
printf("employees ID=%s\nsalary=%f",id,salary);
getch();
}


