#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./line_number.exe FILE_NAME\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("File cannot be opened!\n");
        return 2;
    }

    int ch;
    int line = 1;
    int start_of_line = 1;

    while ((ch = fgetc(file)) != EOF)
    {
        if (start_of_line)
        {
            printf("%d. ", line++);
            start_of_line = 0;
        }

        putchar(ch);

        if (ch == '\n')
        {
            start_of_line = 1;
        }
    }

    fclose(file);
    return 0;
}