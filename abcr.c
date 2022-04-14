#include<stdio.h>
#include<conio.h>
void main()
{
	int r,a,b,c;
	a=0;
	b=1;
	printf("enter r");
	scanf("%d",&r);
	
	c=0;
	while(c<=r)
	{
	c=a+b;
	if(c<=r)
	{
		printf("%d",c);
		
	}
	a=b;
	b=c;
	
	}
	getch();
}