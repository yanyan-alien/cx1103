#include <stdio.h>
void computeTotal(int numOfLines);
int main()
{
 int numOfLines;
 printf("Enter number of lines: \n");
 scanf("%d", &numOfLines);
 computeTotal(numOfLines);
 return 0;
}
void computeTotal(int numOfLines)
{
 /* Write your code here */
 int i, numOfDigits, sum, n, digit;
 for(i=1; i<=numOfLines; i++)
 {
     printf("Enter line %d:\n", i);
     scanf("%d", &numOfDigits);
     scanf("\n");
     sum =0;
     for(n=0;n<numOfDigits;n++)
     {
         scanf("%d", &digit);
         sum += digit;
     }
     printf("Total: %d\n", sum);
 }
}
