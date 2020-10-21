#include <stdio.h>
#include <math.h>
 
int recursion(int);
 
int main()
{
   int i;
   float x, total = 0;
 
   printf("enter value of x = \n");
   scanf("%f", &x);
 
   for(i=0;i<11;++i)total += powf(x, i)/recursion(i);
 
   printf("%f\n", total);
   return 0;
}
 
 
int recursion(int n)
{
    if (n == 1 | n == 0)return 1;
    return n * recursion(n-1);
}
