// program make a summation of given number...
#include <stdio.h>
int main()
{
   int n, t, sum = 0, r;    //   remainder
   printf("Enter a number\n");
   scanf("%d", &n);
   t = n;
   while (t != 0)
   {
      r = t % 10;
      sum = sum + r;
      t   = t / 10;
   }

   printf("Sum of number %d = %d\n", n, sum);

   return 0;
}
