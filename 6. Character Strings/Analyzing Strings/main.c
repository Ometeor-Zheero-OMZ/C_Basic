#include <stdio.h>
#include <string.h>

int main() {
    /*******************************************************************************************
    islower() Lowercase letter
    isupper() Uppercase letter
    isalpha() Uppercase pr lowercase letter
    isalnum() Uppercase or lowercase letter or a digit
    iscntrl() Control charaacter
    isprint() Any printing character including space
    isgraph() Any printing character execpt space
    isdigit() Decimal digit ('0' to '9')
    isxdigit() Hexadecimal digit ('0' to '9', 'A' to 'F'm 'a' to 'f')
    isblank() Standard blank characters (space, '\t')
    isspace() Whitespace character (space, '\n', '\t', '\v', '\r', '\f')
    ispunct() Printing character for which isspace() and isalnum() return false

    the argument to each of these functions is the character to be tested
    all these functinos return a nonzero value of type int if the character is within the set that's
    being tested for
    these return values convert to the and false, respectively, so you can use them as Boolean values.
    *******************************************************************************************/

   char buf[100]; // Input buffer
   int nLetters = 0; // Number of letters in input
   int nDigits = 0; // Number of digits in input
   int nPunct = 0; // NUmber of punctuation characters

   printf("Enter an interesting string of less than %d characters:\n", 100);
   scanf("%s", buf); // Read a string into buffer

   int i = 0; // Buffer index
    while(buf[i])
    {
        if(isalpha(buf[i]))
            ++nLetters; // Increment letter count
        else if(isdigit(buf[i]))
            ++nDigits; // Increment digit count
        else if(ispunct(buf[i]))
            ++nPunct;
        ++i;
    }

    printf("\nYour string contained %d letters, %d digits and %d punctuation characters.\n, nLetters, nDigits, nPunct");
}
