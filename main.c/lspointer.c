#include <stdio.h>

int main()
{
    char str[100], *p;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    p = str;
    while (*p != '\0' && *p != '\n')
    {
        count++;
        p++;
    }

    printf("Length = %d\n", count);
    return 0;
}
