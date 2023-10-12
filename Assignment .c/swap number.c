// swap two numbers without using third variable
#include<stdio.h>
void swap()
{
	int a,b;
	printf ("enter the value of a");
	scanf("%d",&a);
	printf ("\nenter the value of b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=b-a;
	printf("the valu of a=%d and b=%d" ,a,b);
}
main()
{ 
   swap();
}
