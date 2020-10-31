#include <stdio.h>
#include <stdlib.h>

char *strncpy(char * s1, char * s2, int n);
int stringcmp(char *s1, char *s2);
int main()
{
    char *arr2 = "hello";
    char arr[80] = "october2820201.23pm";
    char *arr3 = "abcde";
    char *arr4 = "abcde";
    strncpy(arr, arr2, 2);
    puts(arr);
    //puts(arr3);
    //printf("%d", stringcmp(arr3, arr4));
    return 0;
}

char *strncpy(char * s1, char * s2, int n)
{
 int i=0;
 while(i<=n-1)
 {
     s1[i] = *(s2+i);
     ++i;
 }
 s1[i] = '\0';//add in case last digit is not \0
 return s1;
}

int stringcmp(char *s1, char *s2)
{
    int i=0;
    while(s1[i]==s2[i]) //code is the same as each other
    {
        if(s1[i]=='\0'&s2[i]=='\0')return 0;
        ++i;
    }
    if(s1[i]>s2[i])return 1;
    if(s1[i]<s2[i])return -1;
}

