#include<stdio.h>
main()
{
int i=10,count=0,val;

printf("The numbers which are divisible by 7\nbetween %d  and 200: \n",i);

while(i<100)

{
	
if(i%7==0)

{
	
printf("\n")
count=count+1;
val=i;
printf("%d",  val);
}
i=i+1;
}

printf("\n");

printf("count=%d",count);
}

