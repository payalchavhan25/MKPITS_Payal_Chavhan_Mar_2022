#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,fact=1;
	printf("enter any 5 numbers \n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=a[i];j>=1;j--)
		{
			fact=fact*j;
			
		}
		printf("factorial of %d=%d\n",a[i],fact);
		fact=1;
	}
	getch();
}
