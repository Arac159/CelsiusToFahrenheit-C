#include <stdio.h>

void main ()
{
    double fahrenheit, celsius;
    int upper, lower, step;
    upper = 100;
    lower = 0;
    step = 20;
    celsius = lower;
    printf("%s\n\t%3s\t%6s\n", "Conversion from Celsius to Fahrenheit", "C", "F");
    while (celsius <= upper)
    {
        fahrenheit = celsius / (5.0 / 9.0) + 32;
        printf("\t%3.0f\t%6.1f\n", celsius, fahrenheit);
        celsius += step;
    }
}
