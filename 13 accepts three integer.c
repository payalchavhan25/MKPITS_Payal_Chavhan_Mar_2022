#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z,result,max;
	printf("input the first integer\n");
	scanf("%d",&x);
	printf("input the second integer\n");
	scanf("%d",&y);
	printf("input  the third integer\n");
	scanf("%d",&z);
	result=(x+y+(x-y))/2;
	max=(result+z+(result-z))/2;
	printf("maximum value of three integer:%d\n",max);
	getch();
}