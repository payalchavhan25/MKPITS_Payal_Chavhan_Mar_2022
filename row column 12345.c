#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=5;c>r;c--)
		printf("12345");
		for(c=1;c<=r;c++)
		printf("\n");
	}
	getch();
}