#include <stdio.h>
int sumSqDigits1(int num);
void sumSqDigits2(int num, int *result);
int main()
{
 int num, result;
 printf("Enter a number: \n");
 scanf("%d", &num);
 printf("sumSqDigits1(): %d\n", sumSqDigits1(num));
 sumSqDigits2(num, &result);
 printf("sumSqDigits2(): %d\n", result);
 return 0;
}
int sumSqDigits1(int num)
{
 /* Write your code here */
 int remainder, result=0;
 while(num!=0)
 {
     remainder = num%10;
     num/=10;
     result+= remainder * remainder;
 }
 return result;
}
void sumSqDigits2(int num, int *result)
{
 /* Write your code here */
 int remainder;
 *result = 0;
 while(num!=0)
 {
     remainder = num%10;
     num/=10;
     *result+= remainder * remainder;
 }
}
