/***********************************************************************************************************
Writing characters to a text file
fputc() function writes a single character to a text file

int fputc(int ch, FILE *pfile);

the function writes the character specified by the first argument to the file identified by the second argument (file pointer)
    returns the character that was written if successful
    Return EOF if failure

the putc() function is equaivalent to fputc()
    difference between them is that putc() may be implemented in the standard library as a macro,
    whereas fputc() is a function


Writing a string to a text file

int fputs(const char *str, FILE *pfile);

the first argument is a pointer to the character string that is to be written to the file
the second argument is the file pointer

this function will write characters from a string until it reaches a '\0' character
    does not write the null terminator character to the file
    can complicate reading back variable-length strings from a file that have been written by fputs()
    expecting to write a line of text that has a newline character at the end



Writing formatted output to a file

int fprintf(FILE *stream, const char *format, ...)

the first argument to this function is the pointer to a FILE object that identifies the stream
the second argument to this function is the format

if successful, the total number of characters written is returned otherwise, a negative number is returned
************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int writingCharacters();
int writingStrings();
int anotherWritingStrings();

int main()
{
    anotherWritingStrings();

    return 0;
}

int writingCharacters()
{
    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w+");

    for(ch = 33; ch <= 100; ch++)
        fputc(ch, fp);

    fclose(fp);
    fp = NULL;
    return 0;
}

int writingStrings()
{
    FILE *filePointer;

    filePointer = fopen("file.txt", "w+");

    fputs("This is Jason Fedin Course.", filePointer);
    fputs("I am happy to be here", filePointer);

    fclose(filePointer);
    filePointer = NULL;

    return 0;
}

int anotherWritingStrings()
{
    FILE *fp;

    fp = fopen("file.txt", "w+");
    fprintf(fp, "%s %s %s %s %d", "Hello", "my", "number", "is", 555);

    fclose(fp);
    fp = NULL;

    return 0;
}
