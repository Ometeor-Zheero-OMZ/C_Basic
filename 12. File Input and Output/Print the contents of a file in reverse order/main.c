#include <stdio.h>

#define FILENAME "Test.txt"

int main()
{
    FILE *fp;

    int count = 0;
    int i = 0;

    fp = fopen(FILENAME, "r");

    if(fp == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    // move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // get the position of the file pointer
    count = ftell(fp);

    while(i < count)
    {
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);

    return 0;
}
