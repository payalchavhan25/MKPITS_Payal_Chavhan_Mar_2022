#include<stdio.h>
#include<conio.h>
void main()
{
int x;
printf("enter even number between 1 to 50:\n");
scanf("%d",&x);

if(x%2==0)
{
	printf("%d even number",x);
}
getch();
}