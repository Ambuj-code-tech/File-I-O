#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: %s SOURCE_FILE DESTINATION_FILE\n", argv[0]);
        return 1;
    }

    FILE *src = fopen(argv[1], "r");
    if (src == NULL)
    {
        printf("source file cannot be opened\n");
        return 2;
    }

    FILE *dest = fopen(argv[2], "w");
    if (dest == NULL)
    {
        printf("destination file cannot be opened\n");
        fclose(src);
        return 2;
    }

    int ch;

    while((ch = fgetc(src)) != EOF)
    {
        fputc(toupper(ch), dest);
    }

    fclose(src);
    fclose(dest);

    return 0;
}