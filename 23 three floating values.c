#include<stdio.h>
#include<conio.h>
int main()
{
	float x,y,z,p,s;
	printf("input the first number\n");
	scanf("%d",&x);
	printf("input the second number\n");
	scanf("%d",&y);
	printf("input the third number\n");
	scanf("%d",&z);
	
	if(x<(y+z)&&y<(x+z)&&z<(y+x))
	{
		p=x+y+z;
		printf("perimeter=%f\n",p);
	}
	else
	{
		printf("not possible to create triangle");
		
	}
	getch();
}