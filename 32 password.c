#include<stdio.h>
#include<conio.h>
int main()
{
	int password,x=10;
	while(x!=10)
	{
		printf("input the password\n");
		scanf("%d",&password);
		
		if(password==1234)
		{
			printf("correct password");
			x=0;
		}
		else
		{
			printf("wrong password,try another");
		}
		printf("\n");
	}
	getch();
}