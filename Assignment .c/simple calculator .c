#include <stdio.h>
int main()
{
 int a, b, i;
 printf("Enter Number 1 : ");
 scanf("%d", &a);
 printf("\nEnter Number 2 : ");
 scanf("%d", &b);
 do
{
 printf("\nEnter 1 for '+' ");
 printf("\nEnter 2 for '-' ");
 printf("\nEnter 3 for '*' ");
 printf("\nEnter 4 for '/' \n");
 printf("Enter 0 for Exit ");
 printf("\nEnter your choice : ");
 scanf("%d", &i);
 switch(i)
{
 case 0: break;
 case 1:
 printf("\na + b = %d\n", a + b);
 break;
 case 2:
 printf("\na - b = %d\n", a - b);
 break;
 case 3:
 printf("\na * b = %d\n", a * b);
 break;
 case 4:
 printf("\na / b = %f\n", a / b);
 break;
 default:
 printf("\nEnter valid option\n");
}
} while(i != 0);
 return 0;
}

