#include<stdio.h>
/* 
 * print Fahrenheit-Celsius table
 * for fahr = 0, 10, 20 , ....., 300 
 * 
 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;/* lower limit of temperature*/
    upper = 300;  /* upper limit of temperature*/
    step = 20; /* step size*/

    fahr = lower;
    printf("Fahrenheit \t Celsius\n");
    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%6.2f\t \t %6.2f\n", fahr, celsius);
        fahr = fahr + step;
    }


    return 0;
}
