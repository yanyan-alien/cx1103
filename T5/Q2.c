#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
float operand1, operand2;
char op;    /* operator '+','-','*' or '/'  */
} bexpression;

float compute1(bexpression expr);
float compute2(bexpression *expr);
int main()
{
    bexpression mathh;

    puts("What is your first number?");
    scanf("%f", &mathh.operand1);

    puts("What is your second number?");
    scanf("%f", &mathh.operand2);

    puts("Enter any one operator +, -, *, /");
    scanf(" %c", &mathh.op);

    printf("%0.4f\n", compute1(mathh));
    printf("%0.4f\n", compute2(&mathh));
}

float compute1(bexpression expr)
{
    int i_op;
    float result;
    i_op = (int)expr.op;
    //printf("%d\n", i_op);
    switch(i_op)
    {
        case 43:
            result = expr.operand1 + expr.operand2;
            break;
        case 45:
            result = expr.operand1 - expr.operand2;
            break;
        case 42:
            result = expr.operand1 * expr.operand2;
            break;
        case 47:
            result = expr.operand1 / expr.operand2;
            break;
        default:
            printf("Invalid inputs\n");
    }
    return result;
}

float compute2(bexpression *expr)
{

    switch(expr->op)
    {
        case 43:
            return expr->operand1 + expr->operand2;
            break;
        case 45:
            return expr->operand1 - expr->operand2;
            break;
        case 42:
            return expr->operand1 * expr->operand2;
            break;
        case 47:
            return expr->operand1 / expr->operand2;
            break;
        default:
            printf("Invalid inputs\n");
    }
    return -999;
}
