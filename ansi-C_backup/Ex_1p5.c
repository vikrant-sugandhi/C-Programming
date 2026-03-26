/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
/* Exercise 1-5. Modify the temperature conversion program to print the table in
reverse order, that is, from 300 degrees to O */

#include <stdio.h>

int main()
{
   // int fahr, celsius;

    float fahr, celsius;
    int lower, upper, step;
    
    lower = 300;
    upper = 0;
    step = 20;

    fahr = lower;

    printf("fahr\tcelsius \n");
    while(fahr >= upper)
    {
        celsius = 5 * (fahr-32) / 9;  // this woks as expected.

    /* Since 5 and 9 are integers, 5/9 would be
    truncated to zero and so all the Celsius
    temperatures would be reported as zero*/

      //  celsius = 5/9 * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr -=step;

    }

        return 0;

}
