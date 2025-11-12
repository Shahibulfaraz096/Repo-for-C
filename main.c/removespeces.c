#include <stdio.h>

void removeSpaces(char str[])
{
    int i = 0, j = 0;

    while (str[i] != '\0')
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
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
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    removeNewline(str);

    removeSpaces(str);

    printf("String without spaces: %s\n", str);
    return 0;
}
