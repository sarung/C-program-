/*palindrome*/
#include<stdio.h>
void palin();
main()
{
	palin();
}
void palin()

{
	int i,rev=0,n,dummy;
	printf("Enter the number ");
	scanf("%d",&n);
	dummy=n;
	while(n>0)
	{
		i=n%10;
		rev=rev*10+i;
		n=n/10;
	}
	if ( dummy==rev)
	{
		printf("the number is palindrome ");
		
	}
	else
	{
		printf("the number is not palindrome");
	}
	
}
