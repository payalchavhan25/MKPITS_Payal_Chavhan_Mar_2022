#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name1[10]={"sachhu"};
	char name2[10];
	printf("enter name1");
	scanf("%s",name1);
	
	strcpy(name2,name1);
	scanf("%s",name2);
	printf("%s",name2);
	getch();
}