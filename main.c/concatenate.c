#include <stdio.h>

void concatenate(char str1[], char str2[])
{
    int i = 0, j = 0;

    while (str1[i] != '\0')
        i++;

    while (str2[j] != '\0')
    {
        str1[i++] = str2[j++];
    }

    str1[i] = '\0';
}

int main()
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        if (str2[i] == '\n')
        {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    concatenate(str1, str2);

    printf("Concatenated string: %s\n", str1);
    return 0;
}
