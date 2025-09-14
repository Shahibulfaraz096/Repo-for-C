#include <stdio.h>

int main()
{
    int totalSeconds, hours, minutes, seconds;

    printf("Enter total number of seconds: ");
    scanf("%d", &totalSeconds);

    hours = (totalSeconds / 3600);
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time is %d hour(s), %d minute(s), %d second(s)/n", hours, minutes, seconds);
    return 0;
}