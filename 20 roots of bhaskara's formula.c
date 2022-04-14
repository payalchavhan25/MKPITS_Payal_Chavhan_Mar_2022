#include<stdio.h>
#include<conio.h>
int main()
{
	double a,b,c,pr1;
	printf("input the first number(a)\n");
	scanf("%d",&a);
	printf("input the second number(b)\n");
	scanf("%d",&b);
	printf("input the third number(c)\n");
	scanf("%d",&c);
	
	pr1=(b*b)-(4*(a)*(c));
	if(pr1>0 && a !=0)
	{
		double x,y,sqrt;
		pr1=sqrt*(pr1);
		x=(-b+pr1)/(2*a);
		
		y=(-b-pr1)/(2*a);
		printf("root1=%5d\n",x);
		printf("root2=%5d\n",y);
	}
	else
	{
		printf("impossible to find the roots\n");
	}
	getch();
}