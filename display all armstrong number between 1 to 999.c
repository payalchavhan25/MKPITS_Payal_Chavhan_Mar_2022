#include<stdio.h>
#include<conio.h>
void main()
{
	int num=001;
	int n1,n2,n3,bak,res;
	printf("all armstrong number between 1 to 999\n");
	while(num<=999)
	{
		bak=num;
		
		n1=num%10;
		num=num/10;
		
		n2=num%10;
		num=num/10;
		
		n3=num%10;
		
		res=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
		
		if(bak==res)
		{
			printf("%d\n",res);
		}
		num=bak+001;
		
	}
	getch();
}