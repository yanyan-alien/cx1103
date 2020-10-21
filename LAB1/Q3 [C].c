#include <stdio.h>
/* please read through the answer again to understand nested for loops */
int main()
{
   int i = 0, number, count, a;
   printf("enter the height: ");
   scanf("%d", &number);
   for (i = 1; i <= number; ++i)
   {    
       for(a=1;a<=i; ++a)
       {
        count = i % 3;
        if (count == 0)count = 3;
        printf("%d", count);
       }
       printf("\n");
   }
   return 0;
}
