#include<stdio.h>
#include<conio.h>
void main()
{
int p1,p2,p3;
printf("enter 1st,2nd,3rd person's age\n");
scanf("%d%d%d",&p1,&p2,&p3);
if(p1>p2&&p1>p3)
{
printf("1st person is greater");
}
else if(p2>p1&&p2>p3)
{
printf("2nd person is greater");
}
else
{
printf("3rd person is greater");
}
getch();
}