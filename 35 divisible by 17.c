#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,temp,i,sum=0;
	printf("input the first integer");
	scanf("%d",&x);
	printf("input the second integer");
	scanf("%d",&y);
	
	if(x>y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	for(i=x; i<y; i++)
	{
		if((i%17)!=0)
		{
			sum+=i;
			
		}
	}
	printf("sum%d\n",sum);
	getch();

	
}
