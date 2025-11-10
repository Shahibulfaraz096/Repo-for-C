#include <stdio.h>

int compareStrings(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return s1[i] == s2[i];
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
    char str1[50], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    removeNewline(str1);
    removeNewline(str2);

    if (compareStrings(str1, str2))
        printf("Strings are equal.\n");
    else
        printf("Strings are not equal.\n");

    return 0;
}
