/**********************************************************************************************************
Opening a File
you associate a specific external file name with an internal file pointer variable through a process referred to
as opening a file
    via the fopen() function
    returns the file pointer for a specific external file

the fopen() function is defined in stdio.h

FILE *fopen(const char * restict name, const char * restrict name);

The first argument to the function is a pointer to a string that is the name of the external file you want to process
    you can specify the name explicitly or use a char pointer that contains the address of the character string that
    defines the file name
    you can obtain the file name through the command line, as input from the user, or defined as a constant in your
    program

The second argument to the fopen() function is a character string that represents the file mode
    specifies what you want to do with the file
    a file mode specification is a character string between double quotes

assuming the call to fopen() is successful, the function returns a pointer of type FILE* that you can use to reference
the file in further input/output operations using ohter functions in the library
if the file cannot be opened for some reason, fopen() returns NULL


Write Mode

FILE *pfile = NULL;
char *filename = "myfile.txt";
pfile = fopen(filename, "w"); // Open myfile.txt to write it
if(pfile != NULL)
    printf("Failed to open %s.\n", filename);


If a file with the name myfile.txt does not exist, the call to fopen() will create a new file with this name
if you only provide the file namewithout any path speficication, the file is assumed to be in the current directory
    you can also specify a string that is the full path and name for the file

on opening a file for writing, the file length is truncated to zero and the position will be at the beginning
of any existing data for the first operation
    any data that was previously written to the file will be lost and overwritten by any write operations


Append Mode

pFile = fopen("myfile.txt", "a"); // Open myfile.txt to add to it

when you open a file in append mode
    all write operations will be at the end of the data in the file on each write operation
    all write operations append data to the file and you cannot update the existing contents in this mode


Read Mode

pFile = fopen("myfile.txt", "r");

if you try to open a file for reading that does not exist, fopen() will return a file pointer of NULL


Renaming a file

int rename(const char *oldname, const char *newname);

the integer that is returned will be 0 if the name change was successful and nonzero otherwise
the file must not be open when you call rename(), otherwise the operation will fail

if(rename("C:\\temp\\myfile.txt", "C:\\temp\\myfile_copy.txt"))
    printf("Failed to rename file.");
else
    printf("File renamed successfully.");

this will change the name of myfile.txt in the temp directory on drive C to myfile_copy.txt


Closing a file
when you have finished with a file, you need to tell the operating system so that it can free up the file

fclose() accepts a file pointer as an argument
    returns EOFF (int) if an error occurs
        EOF is a special character called the end-of-file character
        defined in stdio.h as a negative integer that is usually equivalent to the value -1
    0 if successful

fclose(pfile); // Close the file associated with pfile
pfile = NULL;

you must close a file before attempting to rename it or remove it


Deleting a file

remove("myfile.txt");

the file cannot be open when you try to delete it
you should always double check with operations that delete files
    you could wreck your system if you do not


Reading characters from a text file
the fgetc() function reads a character from a text file that has been opened for reading
takes a file pointer as its only argument and returns the character read as type int

int mchar = fgetc(pfile); // Reads a character into mchar with pfile a File pointer

the mchar is type int because EOF will be returned if the end of file has been reached

the function getc(), which is equivalent to fgetc(), is also available
    requires an argument of type FILE* and returns the character read as type int
    virtually indentical to fgetc()
    only difference between them is that getc() may be implemented as a macro, whereas fgetc() is a function

you can read the contents of a file agani when necessary
    the rewind() function positions the file that is specified by the file pointer argument at the beginning


Reading a string from a text file

char fgets(char *str, int nchars, FILE *stream)

the function reads a string into the memory area pointed to by str, from the file specified by stream
    characters are read until either a '\n' is read or nchars -1 characters have been read from the stream,
    whichever occurs first

if a newline character is read, it's retined in the string
    a '\0' character will be appeneded to the end of the string

if there is no error, fgets() returns the pointer, str
if there is an error, NULL is returned
reading EOF causes NULL to be returned


Reading formatted input from a file

int fscanf(FILE *stream, const char *format, ...)

the first argument to this function is the pointer to a FILE object that identifies the stream

the second argument to this function is the format
***********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int firstExample();
int secondExample();
int thirdExample();

int main()
{
    thirdExample();
}

int firstExample()
{
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        perror("Error in opening file");
        return(-1);
    }

    // read a single char
    while((c = fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    system("pause");
    return(0);
}

int secondExample()
{
    FILE *fp;
    char str[60];

    /* opening file for reading */
    fp = fopen("file.txt", "r");

    if(fp == NULL)
    {
        perror("Error opening file");
        return(-1);
    }

    if(fgets(str, 60, fp) != NULL)
    {
        /* writing content to stdout */
        printf("%s", str);
    }

    fclose(fp);
    fp = NULL;
    return(0);
}

int thirdExample()
{
    char str1[10], str2[10], str3[10];
    int year;
    FILE *fp;

    fp = fopen("file.txt", "w+");
    if(fp != NULL)
        fputs("Hello how are you", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%s|\n", year);

    fclose(fp);

    return(0);
}
