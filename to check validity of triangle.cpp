#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter the three side of triangle   a: \n b:  \n c:");
	scanf("%d%d%d",&a,&b,&c);


if (a + b >= c || a + c >= b || b + c >= a)
         printf("the triangle is valid");
    else
         printf("the triangle is not valid");
}
 

