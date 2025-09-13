#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter the celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9.0 / 5.0) * celsius + 32;

    printf("The temperature in fahrenheit:%.2f/n", fahrenheit);
    return 0;
}
