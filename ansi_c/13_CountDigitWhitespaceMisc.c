/* count digits, whitespace and others */

#include <stdio.h>
#define TEN    10

int main()
{
    int ch = 0;
    int i = 0;
    int whiteSpace, misc;

    int digit[TEN];
    whiteSpace = misc = 0;

    for(i=0; i < TEN; i++)
    {
        digit[i] = 0;
         
    }

    while((ch = getchar()) != EOF)
    {
        if(ch == ' ' || ch == '\t' || ch == '\n')
        {
            whiteSpace++;

        }
        else if(ch <= '9' && ch >= '0')
        {
            digit[ch - '0']++;

        }
        else
        {
            misc++;
        }

    }
  
    for(i=0; i < TEN; i++)
    {
        printf("%d ", digit[i]);
    }
    
    printf("%d %d\n", whiteSpace, misc);
   
    return 0;
  
}

