/* line count , blanks count, tabs count, newline count*/
#include <stdio.h> 

int main()
{
    int ch = 0;
    double tc, bc, nc;
    tc = bc = nc = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch == ' ')
        {
            bc++;
        }
        if(ch == '\n')
        {
            nc++;
        }
        if(ch == '\t')
        {
            tc++;

        }

    }
    
        printf("bc: %.0f nc: %.0f tc: %.0f\n", bc, nc, tc);
        return 0;
}





