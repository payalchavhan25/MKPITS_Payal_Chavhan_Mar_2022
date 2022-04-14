#include<stdio.h>
#include<conio.h>
void main()
{
int days,weeks,years;
printf("enter days,weeks,years\n");
scanf("%d%d%d",&days,&weeks,&years);
days=days-(years*365)+(weeks*7);
printf("days=%d\n",days);
weeks=(days%365)/7;
printf("weeks%d\n",weeks);
years=days/365;
printf("years=%d\n",years);
getch();
}