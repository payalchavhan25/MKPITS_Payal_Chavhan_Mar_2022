#include<stdio.h>
#include<conio.h>
int main()
{
int x,y;
float div_result;
printf("input two numbers:");
printf("x:");
scanf("%d",&x);
printf("y:");
scanf("%d",&y);
if(y==0);
{
div_result=(float)x/(float)y;
printf("%f\n",div_result);
}
  else
{
printf("division is not possible.\n");
}
getch();
}

