#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("input the first number");
	scanf("%d",&x);
	printf("input the second number");
	scanf("%d",&y);
	
	if(x>y)
	{
		int temp;
		temp=x;
		x=y;
		y=temp;
	}
	if((y%x)==0)
	{
		printf("multiplied\n");
	}
	else
	{
		printf("not multiplied\n");
	}
	getch();
}
