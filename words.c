#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./words.exe FILE_NAME\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("File cannot be opened\n");
        return 2;
    }

    int ch;

    int words = 0;
    int lines = 1;
    int characters = 0;

    int in_words = 0;

    while ((ch = fgetc(file)) != EOF)
    {
        characters++;

        if (ch == '\n')
        {
            lines++;
        }

        if (isspace(ch))
        {
            in_words = 0;
        }

        else if (!in_words)
        {
            in_words = 1;
            words++;
        }
    }

    printf("-------- TEXT REPORT -----\n");
    printf("Words : %d\n", words);
    printf("Lines  : %d\n", lines);
    printf("Character : %d\n", characters);
    printf("--------------------------\n");

    fclose(file);

    return 0;
}