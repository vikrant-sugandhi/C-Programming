/* Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.*/

#include <stdio.h>

#define MAXWORDSIZE     15
#define OUT             0
#define IN              1

#define NOP     do{}while(0)
int main()
{
    int wordCount[MAXWORDSIZE];
    int countChar = 0;
    int countWord = 0;
    int state = OUT;
    int  ch = 0;
    int i, j;

    for(i = 0; i < MAXWORDSIZE; i++)
    {
        wordCount[i] = 0;
    }
    while((ch = getchar()) != EOF)
    {
        /*if end of word */
        if((ch == '\t') || (ch == '\n') || (ch == ' '))
        {
           if(state == IN)
           {
               state = OUT;
                if(countWord < MAXWORDSIZE)
                {
                    wordCount[countWord++] = countChar;
                    countChar = 0;
                }
                else
                {
                    printf("\nmax no of word limit reached\n");
                }
           }
           else /* if state == IN*/
           {
               state = OUT;
               NOP;
           }
        }
        else /* if valid char */
        {
            if(state == IN)
            {
                countChar++;
            }
            else
            {
                state = IN;
                countChar++;
            }
        }

    }

    for(i = 0; i < countWord; i++)
    { 
        for(j = 0; j < wordCount[i]; j++)
        {
            printf("*");
        }
        
        //printf(" --> %d ",wordCount[i]);
        printf("\n");
    }
    return 0;


}
