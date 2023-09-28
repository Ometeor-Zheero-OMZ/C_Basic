#include <stdio.h>

int main()
{
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1; // Get address of num1
    *pnum = 2L; // Set num1 to 2
    ++num2; // Increment num2
    num2 += *pnum; // Add num1 to num2

    pnum = &num2; // Get address of num2
    ++*pnum; // Increment num2 indrectly

    printf("num1 = %ld num2 = %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);

    // My practicing pointers
    long num3 = 0L;
    long num4 = 0L;
    long *pNum = NULL;

    pNum = &num3; // pNum gets num3 address
    *pNum = 125L; // pNum and num3 have the same value 125
    num3 += *pNum; // num3 has the value 250
    pNum = &num4; // pNum gets num4 address
    *pNum = 300L; // pNum and num4 have the same value 300

    printf("num3 = %ld num4 = %ld *pNum = %ld", num3, num4, *pNum);

    return 0;
}
