#include <stdio.h>
#include <string.h>

int isPalindrome(char str[])
{
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str))
        printf("Palindrome.\n");
    else
        printf("Not Palindrome.\n");

    return 0;
}