#include <stdio.h>

int main() {
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    float large_number = 3.9993232323232;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    printf("%.2f\n", large_number); // round up the number

    return 0;
}
