/* program counts characters */

#include <stdio.h>

int main()
{

 //   int c;
    long int n = 0;

 //   while((c = getchar()) != EOF)
    while(getchar() != EOF)
    {
        n++;
  //      printf("---\n");
  /*      if(c != '\n')
        {
           ++n;

        }
*/

    }

    printf("\n");
    printf("%ld\n",n);

    return 0;

   
}


