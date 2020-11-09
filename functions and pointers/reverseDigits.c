#include <stdio.h>
int reverseDigits1(int num);
void reverseDigits2(int num, int *result);
int main()
{
 int num, result=999;
 printf("Enter a number: \n");
 scanf("%d", &num);
 printf("reverseDigits1(): %d\n", reverseDigits1(num));
 reverseDigits2(num, &result);
 printf("reverseDigits2(): %d\n", result);
 return 0;
}
int reverseDigits1(int num)
{
 /* Write your code here */
 int revnum=0, remainder;
 while(num!=0)
 {
  remainder = num%10;
  revnum += remainder;
  revnum *= 10;
  num/=10;
 }
 return revnum/=10;
}
void reverseDigits2(int num, int *result)
{
 /* Write your code here */
 int revnum=0, remainder;
 *result = 0;
 while(num!=0)
 {
  remainder = num%10;
  *result += remainder;
  (*result) *= 10;
  num/=10;
 }
 *result/=10;
}
