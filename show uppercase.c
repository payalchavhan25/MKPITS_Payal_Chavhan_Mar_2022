#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch1[75];
	printf("enter any name in uppercase:\n");
	scanf("%s",ch1);
	
	for(i=0;ch1[i]!='\0';i++)
	{
		printf("%c",ch1[i]+32);
	}
	getch();
}