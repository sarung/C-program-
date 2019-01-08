#include<stdio.h>
main()
{
	int a,b,flag,i,j,n;
	printf("enter two integer in which you want to find prime numbers");
	scanf("%d%d",&a,&b);
	printf("the prime numbers between %d and %d are : ",a,b);
	 for(i=a+1; i<b; ++i)
    {
        // i is a prime number, flag will be equal to 1

        if(flag == 1)
            printf("%d ",i);
    }
     for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            flag =0;
            break;
        }
    }
}
