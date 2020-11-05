#include <stdio.h>
#include <string.h>
#define INIT_VALUE -1


int countSubstring(char str[], char substr[]);
int main()
{
 char str[80], substr[80], *p;
 int result=INIT_VALUE;

 printf("Enter the string: \n");
 fgets(str, 80, stdin);
 if (p=strchr(str,'\n')) *p = '\0';
 printf("Enter the substring: \n");
 fgets(substr, 80, stdin);
 if (p=strchr(substr,'\n')) *p = '\0';
 result = countSubstring(str, substr);
 printf("countSubstring(): %d\n", result);
 return 0;
}
int countSubstring(char str[], char substr[])
{
 /* Write your program code here */
 int i, lengthsub, lengthstr,count=0; char newstr[40], *p;

 lengthsub = strlen(substr);
 lengthstr =  strlen(str);
 for(i=0;i<lengthstr;i++)
 {

    strcpy(newstr, str);
    p = newstr;
    p = p+i;
    *(p+lengthsub)='\0';
    if(strcmp(p, substr)== 0)++count;
 }
 return count;
}
