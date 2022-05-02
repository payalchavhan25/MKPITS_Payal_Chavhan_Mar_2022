#include<stdio.h>
#include<conio.h>
void main()
{
	int r,c;
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			int rem=c%2;
			printf("%d",rem);
		}
		printf("\n");
	}
	getch();
}