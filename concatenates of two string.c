#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[7],n;
	printf("enter seven integer number\n");
	for(i=0;i<7;i++)
	{
		scanf("%d",&n);
		if(n>0)
		{
			a[i]=n;
		}
		else
		{
			a[i]=100;
			
		}
	}
	for(i=0;i<7;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}