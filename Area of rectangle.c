#include<stdio.h>
#include<conio.h>
void main()
{
	float l,b,h,area;
	printf("enter the length, width and height of rectangular tank \n");
	scanf("%f%f%f", &l,&b,&h);
	area=l*b*h;
	printf("area of rectangular tank %f", area);
	getch();
	
    
}