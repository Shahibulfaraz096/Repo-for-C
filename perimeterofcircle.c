#include <stdio.h>
#include <math.h>

int main()
{
    float perimeter, radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    perimeter = 2 * 3.1416 * radius;
    printf("The perimeter of the circle:%.2f\n", perimeter);
    return 0;
}