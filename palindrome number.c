#include<stdio.h>
#include<conio.h>
void main()
{
	int num,res=0,check,c;
	printf("Enter a number n");
	scanf("%d",&num);
	check=num;
	
	while(num>0)
	{
		c=num%10;
		res=res*10+c;
		num=num/10;
		
	}
	
	if(check==res)
	{
	printf(" The enter number is Palindrome ");
    }
	else
	{
	printf(" The enter number is not Palindrome ");
    }
	
}

 