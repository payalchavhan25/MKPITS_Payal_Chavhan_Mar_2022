#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,r,s;
	printf("input the first integer\n");
	scanf("%d",&p);
	printf("input the second integer\n");
	scanf("%d",&q);
	printf("input the third integer\n");
	scanf("%d",&r);
	printf("input the fourth integer\n");
	scanf("%d",&s);
	if((q>r)&&(s>p)&&(r+s)>(p+q))&&((r>0)&&(s>0)&&(p%2==0))

	{
		printf("correct values\n");
		
	}
	else
	{
		printf("wrong values\n");
	}
	getch();
}