#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	printf("enter any number");
	scanf("%d",&num);
	
	if(num%num)
	{
		printf("this is a prime number");
		
	}
	else
	{
		printf("this is not a prime number");
	}
	getch();
}