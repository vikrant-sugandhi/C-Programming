#include <stdio.h>

int add(int,int);
int sub(int,int);

typedef int (*operator_fp)(int,int);

int execute(int,int,operator_fp);


int main()
{
    int op1 = 20, op2 = 5, result = 0;

   result = execute(op1,op2,add);

   printf("op1+op2 =%d\n", result);

   return 0;
}

int add(int x, int y)
{
    return(x+y);
}

int sub(int x, int y)
{
    return(x-y);
}

int execute(int x, int y, operator_fp operator)
{
    int sum = 0;

    sum = operator(x,y);
    
    return sum;
}




