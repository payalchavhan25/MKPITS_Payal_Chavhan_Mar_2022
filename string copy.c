#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[10]={"sachhu"};
	char name2[10]={"payal"};
	printf("enter name1");
	strcpy(name1,name2);
	printf("%s",name1);
	getch();
}