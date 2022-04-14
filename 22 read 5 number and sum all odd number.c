#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,sum;
	sum=0;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]elememnt\n",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]%2!=0)
		{
			sum=sum+a[i];
		}
	}
	printf("sum of all odd numbers is %d\n",sum);
	getch();
}