#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
   int id;           /* staff identifier */
   int totalLeave;   /* the total number of days of leave allowed */
   int leaveTaken;   /* the number of days of leave taken so far */
} leaveRecord;

void getInput(leaveRecord list[ ], int *n);
int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n);
void printList(leaveRecord list[ ], int n);

int main()
{
   int choice, n=0, id, leave;
   //int number, digit, result=0;

   leaveRecord MonsterInc[80];
   do {
      printf("Welcome to the leave records of MonsterInc!\n");
      printf("1:  getInput()\n");
      printf("2:  mayTakeLeave()\n");
      printf("3:  printList()\n");
      printf("4:  Exit\n");
      printf("Enter your choice: ");
      scanf("%d", &choice);

      switch (choice) {
         case 1:
            printf("Enter the number of staff members: \n");
            scanf("%d", &n);
            getInput(MonsterInc, &n);
            break;
         case 2:
            printf("Enter the Staff ID:\n");
            scanf("%d", &id);
            printf("Enter the number of leaves days:\n");
            scanf("%d", &leave);
            printf("%d\n", mayTakeLeave(MonsterInc, id, leave, n));
            break;
         case 3:
            printList(MonsterInc, n);
            break;
        default:
            printf("Program terminating .....\n");
            break;
        }
   }while(choice<4);
    return 0;
}

void getInput(leaveRecord list[ ], int *n)
{

    int i;
    for(i=0;i<*n;i++)
    {
        printf("Staff ID for Staff %d:\n", i+1);
        scanf("%d", &list[i].id);
        printf("Total leave days:\n");
        scanf("%d", &list[i].totalLeave);
        printf("Leaves taken:\n");
        scanf("%d", &list[i].leaveTaken);
    }
    return;
}

int mayTakeLeave(leaveRecord list[ ], int id, int leave, int n)
{
    int i;
    for(i=0;i<n;i++)
        if(list[i].id == id)
        { //b->x=b->b+9
            if(list[i].totalLeave>=list[i].leaveTaken+leave){list[i].leaveTaken+=leave;return 1;}
            else return 0;
        }
    return -1;
}

void printList(leaveRecord list[ ], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("\nStaff ID:%d\nTotal Leave:%d\nNumber of Leaves Taken:%d\n\n", list[i].id, list[i].totalLeave, list[i].leaveTaken);
    return;
}
