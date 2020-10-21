#include <stdio.h>
int main()  
{  
   int lines, number, total =0, i;
   float count;
   printf("Enter the number of lines: ");
   scanf("%d", &lines);
   for (i = 1; i <= lines; ++i)
   {
     printf("Enter line %d (end with -1):\n", i);
     scanf("%d", &number);
     count = 0;
     while (number != -1)
     {
         total += number;
        ++ count;
        scanf("%d", &number);
     }
     
     printf("average = %f\n", total/count);
   }
   return 0;
}
