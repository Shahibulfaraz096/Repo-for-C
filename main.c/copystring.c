#include <stdio.h>

void copyString(char dest[], char src[])
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0';
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
    char src[100], dest[100];

    printf("Enter Source string: ");
    fgets(src, sizeof(src), stdin);
    removeNewline(src);

    copyString(dest, src);

    printf("Copied String: %s\n", dest);
    return 0;
}
