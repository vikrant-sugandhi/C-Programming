/* line count */
#include <stdio.h> 

int main()
{
    int ch;
    double lc, cc, wc;
    lc = wc = cc = 0;
    for(ch = 0; (ch = getchar()) != EOF; cc++)
    {
        if(ch == ' '|| ch == '\n')
        {
            wc++;
        }
        if(ch == '\n')
        {
            lc++;
        }



    }
    
        printf("cc: %.0f lc: %.0f wc: %.0f\n", cc, lc, wc);
        return 0;
}





