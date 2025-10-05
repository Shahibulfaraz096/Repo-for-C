#include <stdio.h>

int stringlength(char str[])
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }

    if (len > 0 && str[len - 1] == '\n')
        len--;
    return len;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Length = %d\n", stringlength(str));
}