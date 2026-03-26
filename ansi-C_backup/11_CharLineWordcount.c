/*11. A program to count lines, words, and characters in input.*/
#include <stdio.h>

#define OUT 0
#define IN  1
int state = OUT;

int main()
{
    int countChar, countLine,  countWord;
    int ch = 0;
    countChar = countLine = countWord = 0;
    while((ch = getchar()) != EOF)
    {
        countChar++;

        if(ch == '\n')
        {
            countLine++;

        }
        if(ch == ' ' || ch == '\n' || ch == '\t')
        {
            if(state == IN)
                state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            countWord++;

        }

    }
        
    printf("char = %d, word = %d, line =  %d\n", countChar, countWord, countLine);
        
    return 0;

}



