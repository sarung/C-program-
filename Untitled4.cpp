#include<stdio.h>
main()
{
	int i=10,val,count=0;
	printf("the numbers between 10 and 100 divisible by 7 are:  ");
	while ( i<100)
	{
		if(i%7==0)
		{
			printf("\n");
			count=count+1;
			val=i;
			printf("%d",val);
		}
		i=i+1;

		}
		printf("\n");
		printf("the count is %d",count);

}
