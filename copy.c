#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy.exe SOURCE_NAME DESTINATION_NAME\n");
        return 1;
    }

    FILE *src = fopen(argv[1], "r");
    if (src == NULL)
    {
        printf("Failed to open the file\n");
        return 2;
    }

    FILE *dest = fopen(argv[2], "a");
    if (src == NULL)
    {
        printf("Failed to open the file\n");
        return 2;
    }

    int ch;

    while((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);

    return 0;
}