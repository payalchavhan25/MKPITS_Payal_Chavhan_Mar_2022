#include<stdio.h>
#include<conio.h>
int main()
{
	int mno;
	printf("input a number between 1 to 12 to get the month name");
	scanf("%d",&mno);
	switch(mno);
	{
		case1:printf("January\n");break;
		case2:printf("February\n");break;
		case3:printf("March\n");break;
		case4:printf("April\n");break;
		case5:printf("May\n");break;
		case6:printf("June\n");break;
		case7:printf("July\n");break;
		case8:printf("August\n");break;
		case9:printf("September\n");break;
		case10:printf("October\n");break;
		case11:printf("November\n");break;
		case12:printf("December\n");break;
		default:printf("input a number between 1 to 12");
		getch();
	}
}