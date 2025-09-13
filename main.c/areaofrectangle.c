#include <stdio.h>
#include <math.h>

int main()
{

    float length, width, area;

    printf("Enter the length: ");
    scanf("%f", &length);

    printf("Enter the width: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of the rectangle:%.2f\n", area);
    return 0;
}