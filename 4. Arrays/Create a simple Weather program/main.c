#include <stdio.h>
#include <stdlib.h>

#define MONTHS 12
#define YEARS 5

int main() {
    // initialize rainfall data for 2011-1015
    float rain[YEARS][MONTHS] =
    {
        {4.1, 4.5, 7.1, 0.6, 1.4, 4.6, 1.2, 2.7, 2.6, 4.2, 3.6, 1.9},
        {4.6, 4.5, 4.1, 0.6, 1.4, 4.6, 2.2, 1.1, 1.6, 3.2, 3.4, 1.6},
        {4.2, 1.5, 1.4, 2.6, 1.4, 1.6, 1.0, 1.2, 3.6, 1.1, 3.5, 1.1},
        {1.1, 2.5, 2.2, 0.6, 3.4, 4.3, 3.0, 1.7, 1.1, 2.1, 1.6, 1.6},
        {1.1, 2.5, 3.1, 0.4, 1.2, 2.6, 1.0, 2.7, 1.3, 3.1, 2.7, 2.5}
    };

    int year, month;
    float subtotal, total;

    printf("YEAR\t\tRAINFALL (inches)\n");

    for(year = 0, total = 0; year < YEARS; year++)
    {
        for(month = 0, subtotal = 0; month < MONTHS; month++)
        {
            subtotal += rain[year][month];
        }

        printf("%5d \t\t%15.1f\n", 2010 + year, subtotal);
        total += subtotal;
    }

    printf("\nThe yearly average is %.1f inches. \n\n", total / YEARS);

    printf("MONTHLY AVERAGES:\n\n");
    printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct nov Dec\n");

    for(month = 0; month < MONTHS; month++)
    {
        for(year = 0, subtotal = 0; year < YEARS; year++)
        {
            subtotal += rain[year][month];
        }

        printf("%4.1f ", subtotal / YEARS);
    }

    printf("\n");

    return 0;
}
