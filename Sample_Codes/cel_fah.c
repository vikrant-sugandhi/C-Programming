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

    celsius = lower;
    printf("Celsius \t Fahrenheit \n");
    while(celsius <= upper)
    {
       fahr =  ((9.0 / 5.0) * celsius) + 32;
        printf("%6.2f\t \t %6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }


    return 0;
}
