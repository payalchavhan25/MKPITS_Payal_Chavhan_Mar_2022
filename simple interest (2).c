#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("enter principle,rate and time of interest\n");
	scanf("%f%f%f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("simple interest= %f" ,si);
	getch();
	
	
}
	
	
