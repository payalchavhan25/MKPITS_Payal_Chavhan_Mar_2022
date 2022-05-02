#include<stdio.h>
#include<conio.h>
void main()
{
	char r,c,i=1;
	for(r=1;r<=4;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d",i);
			i++;
		}
		printf("\n");
	}
	getch();
}