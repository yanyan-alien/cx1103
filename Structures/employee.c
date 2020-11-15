#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
char name[40];
char telno[40];
int id;
double salary;
} Employee;
void printEmp(Employee *emp, int size);
int readin(Employee *emp);
int search(Employee *emp, int size, char *target);
int addEmployee(Employee *emp, int size, char *target);
int main()
{
Employee emp[MAX];
char name[40], *p;
int size, choice, result;
printf("Select one of the following options: \n");
printf("1: readin() \n");
printf("2: search() \n");
printf("3: addEmployee() \n");
printf("4: print() \n");
printf("5: exit() \n");
do {
printf("Enter your choice: \n");
scanf("%d", &choice);
switch (choice) {
case 1:
size = readin(emp);
break;
case 2:
printf("Enter search name: \n");
scanf("\n");
fgets(name, 40, stdin);
if (p=strchr(name,'\n')) *p = '\0';
result = search(emp,size,name);
if (result != 1)
printf ("Name not found! \n");
break;
case 3:
printf("Enter new name: \n");
scanf("\n");
fgets(name, 40, stdin);
if (p=strchr(name,'\n')) *p = '\0';
result = search(emp,size,name);
if (result != 1)
size = addEmployee(emp, size, name);
else
printf("The new name has already existed in the database\n");
break;
case 4:
printEmp(emp, size);
break;
default:
break;
}
} while (choice < 5);
return 0;
}

void printEmp(Employee *emp, int size)
{
int i;
printf("The current employee list: \n");
if (size==0)
printf("Empty array\n");
else
{
for (i=0; i<size; i++)
printf("%s %s %d %.2f\n",emp[i].name,emp[i].telno,emp[i].id,
emp[i].salary);
}
}
int readin(Employee *emp)
{
  /* Write your code here */
  int i=0; char *p;
  while(1)
  {
   puts("Enter name:"); //name
   scanf("\n");
   fgets((emp+i)->name, 40, stdin);
   if(p=strchr((emp+i)->name, '\n')) *p = '\0';
   if(strcmp((emp+i)->name, "#")==0)break;

   puts("Enter tel:"); //telephone number
   scanf("\n");
   scanf("%s", &(emp+i)->telno);
   if(p=strchr((emp+i)->telno, '\n')) *p = '\0';

   puts("Enter id:"); //id
   scanf("%d", &(emp+i)->id);

   puts("Enter salary:"); //salary
   scanf("%lf", &(emp+i)->salary);
   i++;
  }
  return i;
}
int search(Employee *emp, int size, char *target)
{
  /* Write your code here */
  int i = 0;
  while(i<=size)
  {
    if(strcmp(target, (emp+i)->name)==0)
    {
        printf("Employee found at index location: %d\n", i);
        return 1;
    }
    else i++;
  }
  return 0;
}
int addEmployee(Employee *emp, int size, char *target)
{
/* Write your code here */
  char *p;
  if(size<MAX)
  {
    strcpy(emp[size].name, target);

    puts("Enter tel:"); //telephone number
    scanf("%s", &(emp+size)->telno);
    if(p=strchr((emp+size)->telno, '\n')) *p = '\0';

    puts("Enter id:"); //id
    scanf("%d", &(emp+size)->id);

    puts("Enter salary:"); //salary
    scanf("%lf", &(emp+size)->salary);

    printf("Added at position: %d\n", size);
    return size + 1;
  }
  printf("Database is full\n");
  return size;
}
