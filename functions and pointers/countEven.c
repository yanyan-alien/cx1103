#include <stdio.h>
int countEvenDigits1(int number);
void countEvenDigits2(int number, int *count);
int main()
{
int number, result;
printf("Enter a number: \n");
scanf("%d", &number);
printf("countEvenDigits1(): %d\n", countEvenDigits1(number));
countEvenDigits2(number, &result);
printf("countEvenDigits2(): %d\n", result);
return 0;
}
int countEvenDigits1(int number)
{
  /* Write your code here */
  int digit, count=0;
  while(number!=0)
  {
    digit =  number % 10;
    if(digit % 2 == 0) count++;
    number /= 10;
  }
  return count;
}
void countEvenDigits2(int number, int *count)
{
  /* Write your code here */
  int digit;
  *count = 0;
  while(number!=0)
  {
      digit = number % 10;
      if(digit % 2 == 0) (*count)++;
      number/=10;
  }
}
