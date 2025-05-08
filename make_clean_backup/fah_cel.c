#include<stdio.h>
/* 
 * print Fahrenheit-Celsius table
 * for fahr = 0, 10, 20 , ....., 300 
 * 
 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;/* lower limit of temperature*/
    upper = 300;  /* upper limit of temperature*/
    step = 10; /* step size*/

    fahr = lower;

    while(fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }


    return 0;
}
