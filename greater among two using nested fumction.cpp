#include<stdio.h>
int greater(int,int);
void display();
main()
{
	display();
}
int greater(int x ,int y)
{
   if(x>y)
   {
   	return x;
   }
   else
   {
   	return y;
   }
		
	
}
void display()
{
 
	int a=5,b=8,c;
	c=greater(a,b);
	printf("the greater number is %d",c);
	
}
