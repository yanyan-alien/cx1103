#include <stdio.h>
#include <string.h>
char *sweepSpace1(char *str);
char *sweepSpace2(char *str);
int main()
{
   char str[80],str2[80], *p;

   printf("Enter the string: \n");
   fgets(str, 80, stdin);
   if (p=strchr(str,'\n')) *p = '\0';
   strcpy(str2,str);
   printf("sweepSpace1(): %s\n", sweepSpace1(str));
   printf("sweepSpace2(): %s\n", sweepSpace2(str2));
   return 0;
}
char *sweepSpace1(char *str)
{
   /* Write your program code here */
   int i=0, n;
   while(str[i]!='\0')
   {
    if(str[i]== ' ')
    {
        n=i;
        while(str[n]!='\0')
        {
            str[n] = str[n+1];
            n++;
        }
    }
    i++;
   }
return str;
}
char *sweepSpace2(char *str)
{
   /* Write your program code here */
   int i=0, n;
   while(*(str+i)!='\0')
   {
    if(*(str+i)== ' ')
    {
        n=i;
        while(*(str+n)!='\0')
        {
            *(str+n) = *(str+n+1);
            n++;
        }
    }
    i++;
   }
   return str;
}

