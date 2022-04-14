#include<stdio.h>
#include<conio.h>
void main()
{
	int num,d1,d2,d3,d4,d5,even_sum,odd_sum;
	printf("enter 5 digit number");
	scanf("%d",&num);
	
	d1=num%10;
	num=num/10;
	
	d2=num%10;
	num=num/10;
	
	d3=num%10;
	num=num/10;
	
	d4=num%10;
	num=num/10;
	
	d5=num%10;
	num=num/10;
	
    if(d1%2==0)
	{
		even_sum=even_sum + d1;

	}
	else
	{
		odd_sum=odd_sum + d1;
		
	}
	if(d2%2==0)
	{
		even_sum=even_sum + d2;

	}
	else
	{
		odd_sum=odd_sum + d2;
		
	}
	if(d3%2==0)
	{
		even_sum=even_sum + d3;

	}
	else
	{
		odd_sum=odd_sum + d3;
		
	}
	if(d4%2==0)
	{
		even_sum=even_sum + d4;

	}
	else
	{
		odd_sum=odd_sum + d4;
		
	}
	if(d5%2==0)
	{
		even_sum=even_sum + d5;

	}
	else
	{
		odd_sum=odd_sum + d5;
		
	}
	printf("%d%d even_sum,odd_sum",even_sum,odd_sum);
	getch();
	
}