#include<stdio.h>
#include<conio.h>
void main()
{
	int a[3];
	int i;
	printf("enter 3 number");
	for(i=0;i<=2;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=2;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	getch();
}
