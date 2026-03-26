#include <stdio.h>

#define MAXHISTLEN 15    /* max length of histogram */
#define MAXWORDLEN 11    /* */
#define IN      1
#define OUT     0

int main()
{
    int c, i, nc, state;
    int len;
    int maxvalue;
    int ovflow;
    int wl[MAXWORDLEN];

    state = OUT;
    nc = 0;
    ovflow = 0;

    for(i = 0; i < MAXWORDLEN; ++i)
    {
        wl[i] = 0;
    }
    

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if(nc > 0)
            {
                if(nc < MAXWORDLEN)
                {
                    ++wl[nc];
                }
                else
                {
                    ++ovflow;
                }
            }

            nc = 0;
        }
        else if(state == OUT)
        {
            state = IN;
            nc = 1;

        }
        else
        {
            ++nc;
        }

    }

    maxvalue = 0;
    for(i = 0; i < MAXWORDLEN; ++i)
    {
        if(wl[i] > maxvalue)
        {
            maxvalue = wl[i];
        }
    }

    for(i = 0; i < MAXWORDLEN; ++i)
    {
        printf("%5d %5d: ", i, wl[i]);
        if(wl[i] > 0)
        {
            if((len = wl[i] * MAXHISTLEN / maxvalue) <= 0)
            {
                len = 1;
            }

        }
        else
        {
            len = 0;
        }

        while(len > 0)
        {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if(ovflow > 0)
    {
        printf("there are %d words > = %d \n", ovflow, MAXWORDLEN);
    }


}
