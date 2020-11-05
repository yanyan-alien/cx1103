#include <stdio.h>
void specialNumbers1D(int ar[], int num, int *size);
int main()
{
 int a[20],i,size=0,num;

 printf("Enter a number (between 100 and 999): \n");
 scanf("%d", &num);
 specialNumbers1D(a, num, &size);
 printf("specialNumbers1D(): ");
 for (i=0; i<size; i++)
 printf("%d ",a[i]);
 return 0;
}
void specialNumbers1D(int ar[], int num, int *size)
{
 /* Write your code here */
 int i, number, remainder, sum;
 for(i=100;i<=num;i++)
 {
     number = i;
     sum=0;
     while(number!=0)
     {
        remainder = number % 10;
        number/=10;
        sum += remainder * remainder * remainder;
     }
     if(sum==i){ar[*size] = sum; (*size)++;}
 }
}
