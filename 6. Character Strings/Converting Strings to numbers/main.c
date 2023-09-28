#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    /*********************************************************************************************************
    the stdlib.h header file declares functions that you can use to convert a string to a numerical value

    atof() A value of type double that is produced from the string argument. Infinity as a double value is recognized
           from the strings "INF" or "INFINITY" where any character can be in uppercase or lowercase and 'not a number'
           is recognized from the string "NAN" in uppercase or lowercase.
    atoi() A value of type int that is produced from the string argument.
    atol() A value of type long that is produced from the string argument.
    atoll() A value of type long long that is produced from the string argument.

    For all four functions, leading whitespace is ignored
    char value_str[] = "98.4";
    double value = atof(value_str);

    strtod() A value of type double is produced from the initial part of the string specified by the first argument.
             The second argument is a pointer to a variable, ptr say, of type char* in which the function will store
             the address of the first character following the substring that was converted to the double value.
             If no string was found that could be converted to type double, the variable ptr will contain the address
             passed as the first argument.
    strtof() A value of type float. In all other respects it works as strtod().
    strtold() A value of type lond double. In all other respects it works as strtod().
    ************************************************************************************************************/

   double value = 0;
   char str[] = "3.5 2.5 1.26"; // The string to be converted
   char *pstr = str; // Pointer to the string to be converted
   char *ptr = NULL; // Pointer to character position after conversion

   while(true)
   {
    value = strtod(pstr, &ptr); // Convert starting at pstr

    if(pstr == ptr) // pstr stored if no conversion...
        break; // ... so we are done
    else
    {
        printf(" %d", value); // Output the resultant value
        pstr = ptr; // Store start for next conversion
    }
   }
}
