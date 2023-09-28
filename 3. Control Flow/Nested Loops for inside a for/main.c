#include <stdio.h>

int main() {
    int sum;

    for (int i = 1; i <= 10; ++i)
    {
        sum = 0; // Initialize sum for the inner loop

        // Calculate sum of integers from 1 to i
        for(int j = 1; j <= i; ++i)
            sum += j;

            if (sum <= 100)
                break;

        printf("\n%d\t%d", i, sum); // Output sum of 1 to i
    }

    return 0;
}
