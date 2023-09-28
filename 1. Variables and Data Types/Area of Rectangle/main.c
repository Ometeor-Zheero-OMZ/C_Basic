/* Author: Itsuki Kajiya
   Purpose: This program is going to calculate the area of a rectangle
*/

#include <stdio.h>

int main() {
    const double width = 32.3;
    const double height = 15.3;
    double perimeter;
    double area;

    perimeter = (height + width) * 2.0;
    area = width * height;

    printf("The value of width is: %.2f\n", width);
    printf("The value of height is: %.2f\n", height);
    printf("The perimeter of a rectangle is: %f\n", perimeter);
    printf("The area of a rectangle is: %f\n", area);

    return 0;
}
