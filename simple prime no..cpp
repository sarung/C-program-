#include <stdio.h>
int main()
{
	int a ,b,i,j;
	printf("enter  the numbers in which between you want to find prime numbers");
	scanf("%d%d",&a,&b);
    for(  i=a;i<b;i++)
    {
        for(  j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\n",i);
        }
    }
}

