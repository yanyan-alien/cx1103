#include <stdio.h>
#include <string.h>
void insertChar(char *str1, char *str2, char ch);

int main()
{
char a[80],b[80];
char ch, *p;
printf("Enter a string: \n");
fgets(a, 80, stdin);
if (p=strchr(a,'\n')) *p = '\0';
printf("Enter a character to be inserted: \n");
ch = getchar();
insertChar(a,b,ch);
printf("insertChar(): ");
puts(b);
return 0;
}

void insertChar(char *str1, char *str2, char ch)
{
/* Write your code here */
int lenstr1=strlen(str1), i, n;
strcpy(str2, str1);
for(i=lenstr1-1;i>=0;i--)
    {
    if((i+1)%3==0)
        {
            for(n=lenstr1;n>=i+1;n--) str2[n+1] = str2[n];//range i+1 to lenstr1
            *(str2+i+1) = ch;
            lenstr1++;
        }
    }
}
