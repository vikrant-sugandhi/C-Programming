/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */

#include <stdio.h>

#define LOWER 	0		/* lower limit of table */
#define UPPER 	300		/* upper limit */
#define STEP 	20		/* step size */

int main()
{
   // int fahr, celsius;

    float fahr;
    
    printf("fahr\tcelsius \n");


/* print Fahrenheit-Celsius table */
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    /* Since 5 and 9 are integers, 5/9 would be
    truncated to zero and so all the Celsius
    temperatures would be reported as zero*/

      //  celsius = 5/9 * (fahr-32);

    return 0;

}
