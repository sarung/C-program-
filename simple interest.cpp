#include<stdio.h>
main()
{
	int p,r,t,i;
	printf("enter principle , time , rate");
	scanf("%d%d%d",&p,&t,&r);
	i=(p*t*r)/100;

	printf("the sum  you will get is %d",i);
	return 0;
	
}

