#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char ch;
    int words = 0, in_word = 0;

    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (isspace(ch) || ch == ',' || ch == '!' || ch == '?')
        {
            if (in_word)
            {
                words++;
                in_word = 0;
            }
        }
        else
        {
            in_word = 1;
        }
    }

        if (in_word)
        words++;

    fclose(file);

    printf("Number of words: %d\n", words);
    return 0;
}
