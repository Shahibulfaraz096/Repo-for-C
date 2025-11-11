#include <stdio.h>

int countCharacter(char str[], char ch)
{
    int i = 0, count = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
            count++;
        i++;
    }
    return count;
}

int main()
{
    char str[100], ch;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    printf("'%c' occurred %d times.\n", ch, countCharacter(str, ch));
    return 0;
}