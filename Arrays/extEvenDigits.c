#include <stdio.h>
#define INIT_VALUE 999
int extEvenDigits1(int num);
void extEvenDigits2(int num, int *result);
int main()
{
   int number, result = INIT_VALUE;
   
   printf("Enter a number: \n");
   scanf("%d", &number);
   printf("extEvenDigits1(): %d\n", extEvenDigits1(number));        
   extEvenDigits2(number, &result);
   printf("extEvenDigits2(): %d\n", result);
   return 0;
}
int extEvenDigits1(int num) 
{  
	/*edit*/
   /* Write your code here */
int exp=-1, sum=0, result = 0, i;
 while(num>0)
 {
    if((num % 10)%2==0)
    {
        exp += 1;
        sum=num%10;
        for(i=1;i<=exp;++i)sum*=10;
        result += sum;
    }
     num /= 10;
 }
 if(sum==0)return -1;
 return result;

	/*end_edit*/
}
void extEvenDigits2(int num, int *result) 
{  
	/*edit*/
   /* Write your code here */
int exp =-1, sum=0, i;
*result = 0;
while(num>0)
{
    if((num % 10)%2==0)
    {
        exp += 1;
        sum=num%10;
        for(i=1;i<=exp;++i)sum*=10;
        *result += sum;
    }
     num /= 10;

}
if(*result==0)*result = -1;
	/*end_edit*/
}
