#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int s;
	char n1[10]={"1234"};
	char n2[10];

	printf("enter password");
	scanf("%s",n2);
	s=strcmp(n1,n2);
	if(s==0)
	{
		printf("password is correct");
		
	}
	else
	{
		printf("password is not correct");
		
	}
	getch();
	
}