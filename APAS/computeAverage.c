#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
   printf("average(): %.2f\n", average());           
   return 0;
}
double average()
{
   /* Write your program code here */
   struct student people[50];
   int i=0;
   double sum=0;
   char *p;
   while(1)
   {
       puts("Enter student name:");
       scanf("\n");
       fgets(people[i].name, 20, stdin);
       if(p=strchr(people[i].name, '\n')) *p = '\0';
       if(strcmp("END", people[i].name)==0) break;
       puts("Enter test score:");
       scanf("%lf", &people[i].testScore);
       puts("Enter exam score:");
       scanf("%lf", &people[i].examScore);
       people[i].total = (people[i].testScore+people[i].examScore)/2;
       sum += people[i].total;
       printf("Student %s total = %.2lf\n", people[i].name, people[i].total);
       i++;
   }
   if(!i) return 0;
   return sum/i;
}
