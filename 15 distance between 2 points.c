#include<stdio.h>
#include<conio.h>
int main()
{
	float x1,y1,x2,y2,sqr,gdistance;
	printf("input x1");
	scanf("%f",&x1);
	printf("input y1");
	scanf("%f",&y1);
	printf("input x2");
	scanf("%f",&x2);
	printf("input y2");
	scanf("%f",&y2);
	
	gdistance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("distance between the said points %4f",sqr+(gdistance));
	getch();
}