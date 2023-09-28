#include <stdio.h>
#include <string.h>

int main() {
    /*******************************************************************************************
    the first argument to strchr() is the address of the first location to be searched
    second argument is the character that is sought (ch, which is of type char)
    expects its second argument to be of type int, so the compiler will convert the value of
    ch to this type
    could just as well define ch as type int (int ch = 'q';)
    pGot_char will point to the value ("quick brown fox")
    *******************************************************************************************/
    char str[] = "The quick brown fox"; // The string to be searched
    char ch = 'q'; // The character we are looking for
    char *pGot_char = NULL; // Pointer initialized to NULL
    pGot_char = strchr(str, ch); // Stores address where ch is found

    /*******************************************************************************************
    the strstr() function is probably the most useful of all the searching functions
    searches one string for the first occurrence of a substring
    returns a pointer to the position in the first string where the substring is found
    if no match, returns NULL

    the first argument is the string that is to be searched
    the second argument is the substring you're looking for

    searches text for the first occurrence of the string stored in word
    the string "dog" appears starting at the seventh character in text
    pFound will be set to the address text + 6 ("dog has his day")
    search is case sensitive, "Dog" will not be found
    *******************************************************************************************/
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);

    return 0;
}
