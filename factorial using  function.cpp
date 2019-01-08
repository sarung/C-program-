#include<stdio.h>
void fact();
main()
{
	fact();
}
void fact()
{
	int a,b,f;
	printf("enter the number whose factorial is to be founded");
	scanf("%d",&a);
	if (a==0)
	{
		printf("the factorial cannot be found for this varaiable");
		
	}
	else
	{
		b= a*fact(a-1);
		printf("the factorial is %d",b);
	}
}
