#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	char ch1[75];
	char ch2[55];
	printf("enter any name in lowercase:\n");
	scanf("%s",ch1);
	
	for(i=0;ch1[i]!='\0';i++)
	{
		ch2[i]=ch1[i]-32;
	}
	printf("%s",ch2);
	getch();
}