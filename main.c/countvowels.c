#include <stdio.h>

int countVowels(char str[])
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;

        i++;
    }
    return count;
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

    printf("Number of vowels: %d\n", countVowels(str));
    return 0;
}
