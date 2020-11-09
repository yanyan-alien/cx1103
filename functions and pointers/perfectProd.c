#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
   int number, result=0;      
       
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("Calling perfectProd1() \n");
   printf("perfectProd1(): %d\n", perfectProd1(number));
   
   printf("Calling perfectProd2() \n");
   perfectProd2(number, &result);
   printf("perfectProd2(): %d\n", result);
   return 0;
}
int perfectProd1(int num)
{
	/*edit*/
   /* Write your code here */
    int i,factors, count, product=1;
    for(i=6;i<num;++i)
    {
      count = 0;
      for(factors=1;factors<i;++factors)
      {
          if (i%factors == 0)count+=factors;
      }
      if(count==i)
      {
          printf("Perfect number: %d\n", count);
          product*=count;
      }
    }
    if (product == 1)return -1;
    return product;

	/*end_edit*/
}
void perfectProd2(int num, int *prod)
{  
	/*edit*/
   /* Write your code here */
   int i,factors, count;
   *prod = 1;
   for(i=6;i<num;++i)
    {
      count = 0;
      for(factors=1;factors<i;++factors)
      {
          if (i%factors == 0)count+=factors;
      }
      if(count==i)
      {
          printf("Perfect number: %d\n", count);
          *prod *=count;
      }
    }
    if(*prod == 1)*prod = -1;

	/*end_edit*/
}
