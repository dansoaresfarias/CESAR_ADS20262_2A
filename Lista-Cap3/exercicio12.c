#include <stdio.h>

int main()
{
    float celsius;

    printf("%10s %12s %10s\n", "Celsius", "Fahrenheit", "Kelvin");

    for (celsius = 0; celsius <= 100; celsius += 5)
        printf("%10.2f %12.2f %10.2f\n", celsius, (9 * celsius) / 5 + 32, celsius + 273.15);

    return 0;
}
