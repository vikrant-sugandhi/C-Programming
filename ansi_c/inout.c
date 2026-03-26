/*program that copies its input to its output one character at a time */
#include <stdio.h>
int main()
{
    int c;
  /*  c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
       // putchar(c);

    }*/

    while((c = getchar()) != EOF)
    {
        putchar(c);

    }

    printf("%d\n",c);

    printf("%c\n",c);

    printf("%d\n",EOF);

    printf("%c\n",EOF);
    return 0;


}
