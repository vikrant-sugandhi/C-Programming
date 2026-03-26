/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */
/*Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

int main()
{
   // int fahr, celsius;

    float fahr, celsius;
    float lower, upper, step;
    
    lower = -17.8;
    upper = 300;
    step = 11.1;

    celsius = lower;

    printf("fahr\tcelsius \n");
    while(fahr < upper)
    {
        fahr = celsius * (9.0/5.0) + 32;
      //  celsius = 5 * (fahr-32) / 9;  // this woks as expected.

    /* Since 5 and 9 are integers, 5/9 would be
    truncated to zero and so all the Celsius
    temperatures would be reported as zero*/

      //  celsius = 5/9 * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
       // fahr += step;
       celsius += step;

    }

        return 0;

}
