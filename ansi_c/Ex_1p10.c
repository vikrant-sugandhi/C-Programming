/* line count , blanks count, tabs count, newline count*/
/*Backspace: (BS) ASCII code 8, Control-H. The control character that should cause most output devices to move their current output position back to the previous character so that the next character output will replace (or overprint) it. Inputting a backspace (typically by pressing the backspace key) causes many systems to delete the character before the input cursor, though others use delete for this.*/

#include <stdio.h> 

int main()
{
    int ch = 0;
  //  int  tc, bs, bsl;
   // tc = bs = bsl = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch == '\t')
        {
            printf("\\t");
        }
        else if(ch == '\b')
        {
            printf("\\b");
        }
        else if(ch == '\\')
        {
            printf("\\\\");

        }
        else
        {
            putchar(ch);
        }

    }
    
       // printf("bc: %.0f nc: %.0f tc: %.0f\n", bc, nc, tc);
        return 0;
}





