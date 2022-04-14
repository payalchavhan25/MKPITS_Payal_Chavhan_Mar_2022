#include<stdio.h>
#include<conio.h>
void  main()
 {
 	int num,rem;
 	printf("input an integer :");
 	scanf("%d",&num);
 	rem=num%2;
 	if(rem==0)
 	{
 		printf("%d is even",num);
    }
 	else
 	{
 		printf("%d is odd",num);
    }
 	getch();
 }