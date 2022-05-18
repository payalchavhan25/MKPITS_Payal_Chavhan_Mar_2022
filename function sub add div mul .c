#include<stdio.h>
#include<stdio.h>
void add(int a,int b)
{
    int sum;
    sum=a+b;
    printf("addition= %d",sum);
}
void sub(int a,int b)
{
    int sub;
    sub=a-b;
    printf("\nsubstraction= %d",sub);
}
void mul(int a, int b)
{
    int mul;
    mul=a*b;
    printf("\nmultiplication= %d",mul);
}
void div(int a, int b)
{
    int div;
    div=a/b;
    printf("\ndivision= %d",div);
}

void main()
{
    int num1,num2;
    printf("enter 1st num: ");
    scanf("%d",&num1);
    printf("enter 2nd num: ");
    scanf("%d",&num2);
    add(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    div(num1, num2);
} 