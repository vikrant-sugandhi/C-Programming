/* input to output copy by replacing more than one blank to single blank */

#include <stdio.h>
/*
int main()
{
    int ch = 0;
    int flag = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch == ' ')
        {
            if(flag !=1 )
            {
                flag = 1;
                putchar(ch);
            }
            else
            {
               ; //NOP
            }
        } 
        else
        {
            putchar(ch);
            flag = 0;
        }

    }

    return 0;

}*/

#define NOBLANK 'a'

int main()
{
    int ch = 0;
    int lastch = NOBLANK;

    while((ch = getchar()) != EOF)
    {
        if(ch != ' ')
            putchar(ch);
        if(ch == ' ' && lastch != ' ' )
            putchar(ch);
        
        lastch = ch;

    }

}
