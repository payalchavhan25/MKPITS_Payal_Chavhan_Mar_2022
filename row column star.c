#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c,str=1;
	for(r=1;r<=1;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(r=5-1;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}