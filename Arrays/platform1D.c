#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
int i,b[50],size;
printf("Enter array size: \n");
scanf("%d", &size);
printf("Enter %d data: \n", size);
for (i=0; i<size; i++)
scanf("%d",&b[i]);
printf("platform1D(): %d\n", platform1D(b,size));
return 0;
}

int platform1D(int ar[], int size)
{
  /* Write your code here */
  int i, count=0, num=0, previous_count = 0;
  num = *ar;
  for(i=0;i<size;i++)
  {
      if(num == ar[i]) count++;
      else
      {
          if(count>previous_count)previous_count = count;
          num = ar[i];
          count = 1;
      }
  }
  return previous_count;
}
