#include<stdio.h>
#include<conio.h>
int main()
{
	int dist,fuel;
	float avg;
	printf("input the total distance");
	scanf("%d",&dist);
	printf("input total fuel spent in liters");
	scanf("%d",fuel);
	avg=dist/fuel;
	printf("average consumption=%2f",avg);
	getch();
}