/*Exercise 1-12. Write a program that prints its input one word per line.*/
/*
 * figureout end of word and then add newline '\n'
 */

#include <stdio.h>

#define OUT  0
#define IN   1
#define NOP  do{}while(0)
int state = OUT;

int main()
{
    int ch = 0;

    while((ch = getchar()) != EOF)
    {
        if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            if(state == IN)
            {
                state = OUT;
                putchar('\n');
            }
            else if(state == OUT)
            {
                NOP;
            }
        }
        else
        {
            if(state == OUT)
            {
                state = IN;
                putchar(ch);
            }
            else if(state == IN)
            {
                putchar(ch);
            }

        }

    }

    return 0;

}
