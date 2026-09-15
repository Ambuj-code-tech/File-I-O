#include <stdio.h>
#include <string.h>

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

    char line[1024];

    while (fgets(line, sizeof(line), src) != NULL)
    {
        size_t len = strlen(line);

        int has_newline = 0;
        if (len > 0 && line[len - 1] == '\n')
        {
            has_newline = 1;
            len--;  // don't reverse the newline
        }

        for (int i = (int)len - 1; i >= 0; i--)
        {
            fputc(line[i], dest);
        }

        if (has_newline)
        {
            fputc('\n', dest);
        }
    }

    fclose(src);
    fclose(dest);

    return 0;
}