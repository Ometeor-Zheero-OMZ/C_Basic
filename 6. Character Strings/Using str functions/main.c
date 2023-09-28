#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "my string";

    // copy and concatenate strings
    char src[50], dest[50];

    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destiantion string: |%s|\n", dest);

    // concatenate a word entered into the string stored
    char input[80];

    printf("Enter a string to be concatenated: ");
    scanf("%s", input);

    strncat(input, myString, sizeof(input) - 1);
    printf("%s\n", input);

    // copy and measure the length of strings
    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);

    printf("The length of this string is: %zd\n", strlen(myString));
    printf("The string is: %s\n", temp);
    printf("The string %s concatenated with %s is::::\n", myString, input);

    // compare strings
    printf("strcmp(\"A\", \"A\") is ");
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp(\"A\", \"B\") is ");
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is ");
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is ");
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is ");
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is ");
    printf("%d\n", strcmp("apples", "apple"));

    if(strncmp("astronomy", "astro", 5) == 0)
    {
        printf("Found: astronomy");
    }

    if(strncmp("astounding", "astro", 5) == 0)
    {
        printf("Found: astounding");
    }

    return 0;
}
