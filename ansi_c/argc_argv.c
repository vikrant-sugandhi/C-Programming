#include<stdio.h>
//#define TENSOR 0


int main(int argc, char *argv[])
{
#if TENSOR 1
printf("hello\n");
#else

  int i; 
    for(i = 0; i < argc; i++)
    {
        printf("%d %s\n", i, argv[i]); 

    }
#endif
    return 0;

}

/*
#include <stdio.h>

// HASH is not defined in the code, but can be passed at compile time
int main() {
    int x = 5;
    int y = HASH(x); // The HASH macro call is replaced here

    printf("Result: %d\n", y);
    return 0;
}
*/
// gcc -D'HASH(X)=(X+1)' program.c -o program1
// gcc -D'HASH(X)=(X*2)' program.c -o program2

