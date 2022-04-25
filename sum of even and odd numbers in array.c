#include<stdio.h>
#include<conio.h>
void main()
{
	int size,i,a[10];
	int even_cnt=0,odd_cnt=0;
	int even_sum,odd_sum;
	printf("enter the size of an array\n");
	scanf("%d",&size);
	printf("enter the array element\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]%2==0)
		{
			even_cnt=even_cnt+1;
		}
		else
		{
			odd_cnt=odd_cnt+1;
		}
	}
	printf("\nthe sum of even numbers in the array=%d",even_sum);
	printf("\nthe sum of odd numbers in the array=%d",odd_sum);
	getch();
}