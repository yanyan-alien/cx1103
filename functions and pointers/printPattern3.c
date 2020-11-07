#include <stdio.h>
void printPattern3(int height);
int main()
{
 int height;
 printf("Enter the height: \n");
 scanf("%d", &height);
 printf("printPattern3(): \n");
 printPattern3(height);
 return 0;
}
void printPattern3(int height)
{
 /* Write your code here */
 int i, j, num;
 for(i=1;i<=height;i++)
    {
    for(j=i;j<i+i;j++)
    {
        num = j;
        if(j>9){num-=10;}
        printf("%d", num);
    }
    printf("\n");
    }
}
