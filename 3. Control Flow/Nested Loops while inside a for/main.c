#include <stdio.h>

int main() {
    int sum;
    int j;

    for(int i = 1; i <= 20; ++i)
    {
        sum = 1; // Initialize sum for the inner loop
        j = 1; // Initialize integer to be added
        printf("\n1");

        // Calculate sum of integers from 1 to i
        while(j < i)
        {
            sum += ++j;
            printf(" + %d", j); // Output +j - on the same line
        }
        printf(" = %d", sum); // Output = sum
    }

    return 0;
}
