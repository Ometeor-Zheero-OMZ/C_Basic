#include <stdio.h>
#include <string.h>

int main() {
    /*******************************************************************************************
    a token is a sequence of characters within a string that is bound by a delimiter
    a delimiter can be anything, but should be unique to the string
    spaces, commas, and a period are good exapmples
    breaking a sentence into words is called tokenizing
    the strtok() function is used for tokenizing a string
    It requires two arguments
    string to be tokenized
    a string containing all the possible delimiter characters
    *******************************************************************************************/

   char str[80] = "Hello how are you - my name is - jason";
   const char s[2] = "-";
   char *token;

   // get the first token
   token = strtok(str, s);

   // walk through other tokens
   while(token != NULL)
   {
    printf(" %s\n", token);

    token = strtok(NULL, s);
   }

   return 0;
}
