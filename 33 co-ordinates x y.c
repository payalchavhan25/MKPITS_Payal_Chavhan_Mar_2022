#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("input the co-ordinate(x,y)");
	printf("x");
	scanf("%d",&x);
	printf("y");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("Quadrant-1(+,+)\n");
	}
	else if(x>0 && y<0)
	{
		printf("Quadrant-2(+,-)\n");
		
	}
	else if(x<0 && y>0)
	{
		printf("Quadrant-3(-,-)\n");
	}
	else if(x<0 && y>0)
	{
		printf("QuadrAnt-4(-,+)\n");
	}
	getch();
}