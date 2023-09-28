/*
    The goto statement is available in C
    it has two parts -- the goto and a label name
    label is named following the same convention used in naming a variable

    BUT:
    you should never need to use the goto statement
    if you have a background in older versions of FORTRAN or BASIC, you might have developed
        programming habits that depend on using goto

    more detail:
        https://monozukuri-c.com/langc-funclist-goto/#toc5
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE * fp = NULL;
    char * pmem = NULL;

    // generate the file handling
    fopen_s(&fp, "sample.txt", "w");

    // save dynamic memory
    pmem = (char *)malloc(100);
    if (pmem == NULL)
    {
        // release sources when something goes wrong
        fclose(fp);
        return -1;
    }

    // read data from dynamic memory
    if (-1 == readData(pmem))
    {
        // release sources when something goes wrong
        free(pmem);
        fclose(fp);
        return -1;
    }

    // write data to file
    if (-1 == writeFile(pmem, fp))
    {
        // release sources when something goes wrong
        free(pmem);
        fclose(fp);
        return -1;
    }

    // release sources when program finishes with no problems
    fclose(fp);
    free(pmem);
    return 0;
}
