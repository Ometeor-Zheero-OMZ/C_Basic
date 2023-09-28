#include <stdio.h>

int main() {
    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 0;

    printf("Please enter the number of minutes: ");

    // for every single data type except a string, you have to provide the ampersand. The address sub-operator.
    scanf("%d", &minutes);

    minutesInYear = (60 * 24 * 365);

    years = (minutes / minutesInYear);
    days = (minutes / 60.0) / 24.0;

    printf("%d minutes is approximately %f years and %f days\n", minutes, years, days);

    return 0;
}
