#include<stdio.h>
#include<conio.h>
void main()
{
	int i,a[5],ser;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter num u want to search");
	scanf("%d",&ser);
	for(i=0;i<5;i++)
	{
		if(a[i]==ser)
		{
	printf("present");
	}
	printf("\n");
	}
	getch();
}