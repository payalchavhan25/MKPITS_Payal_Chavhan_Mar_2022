#include<stdio.h>
#include<conio.h>
int main()
{
	int ndays,y,m,d;
	printf("input no of days");
	scanf("%d",&ndays);
	y= (int)ndays/365;
	ndays=ndays-(365-y);
	m= (int)ndays/30;
	d= (int)ndays-(m*30);
	
	printf("%d year(s)\n%d month(s)\n%d day(S)",y,m,d);
	getch();
}