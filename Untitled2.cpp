#include<stdio.h>
int main()
{
	int i,j,n;
	int a[50];
	printf("enter the numbers of elements");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	
		if (a[i]==a[j])
		{
			printf("THE REPEATED NUMBER IS = ");
		printf("%d",a[i]);
	
	
		}
		
	}
	
}
