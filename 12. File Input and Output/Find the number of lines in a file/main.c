#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int linesCount = 0;

    fp = fopen("test.txt", "r");

    if(fp == NULL)
    {
        perror("File does not exist\n");
        return(-1);
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
            linesCount++;
    }

    fclose(fp);
    fp = NULL;

    printf("Total number of lines are: %d\n", linesCount);

    return(0);
}
