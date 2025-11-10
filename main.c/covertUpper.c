#include <stdio.h>

void toUppercase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
}

void removeNewline(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    removeNewline(str);

    toUppercase(str);

    printf("Uppercase: %s\n", str);
    return 0;
}
