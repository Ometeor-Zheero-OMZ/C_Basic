#include <stdio.h>
#include <stdbool.h>

int stringLength(const char string[]);
void concat(char result[], const char str1[], const char str2[]);
bool equalStrings(const char s1[], const char s2[]);

int main()
{
    const char word1[] = "jason";
    const char word2[] = "ok";
    const char word3[] = "whatever";
    char result[50];

    printf("%d    %d    %d\n", stringLength(word1), stringLength(word2), stringLength(word3));

    concat(result, word1, word2);

    printf("%s\n", result);

    printf("%d\n", equalStrings("Jason", "Jason"));
    printf("%d\n", equalStrings("Jathan", "Jason"));

    return 0;
}

/********************************
FUNCTION THAT CALCULAUTE THE LENGTH
OF STRINGS INSTEAD OF strlen()
**********************************/
int stringLength(const char string[])
{
    unsigned int count = 0;

    while(string[count] != '\0')
        ++count;

    return count;
}

/********************************
FUNCTION THAT CONCATNATE TWO
STRINGS INSTEAD OF strcat() amd strncat()
**********************************/
void concat(char result[], const char str1[], const char str2[])
{
    int i, j;

    for(i = 0; str1[i] != '\0'; ++i)
    {
        result[i] = str1[i];
    }

    for(j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];

    result[i + j] = '\0';
}

/****************************************************
FUNCTION THAT DETERMINES IF TWO CHARACTER STRINGS
ARE EQUAL INSTEAD OF strcmp() and strncmp()
*****************************************************/
bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool isEquals = false;

    while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;

    if(s1[i] == '\0' && s2[i] == '\0')
        isEquals = true;
    else
        isEquals = false;

    return isEquals;
}

/****************************************************
FUNCTION THAT COPY CHARACTER STRING TO ANOTHER
INSTEAD OF strcpy() and strncpy(), WHICH IS ADDITIONAL FUNCTION
*****************************************************/
