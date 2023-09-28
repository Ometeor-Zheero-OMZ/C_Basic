#include <stdio.h>

int main()
{
    int num = 10;
    const int* pnum = &num; // value can not be changed
    // *pnum += 20; is not valid

    int num2 = 100;
    int *const pnum2 = &num2; // pointer address cannot change
    *pnum2 = 200;

    // pnum2 = &num; is not valid


    printf("num = %d num2 = %d *pnum = %d *pnum2 = %d", num, num2, *pnum, *pnum2);

    return 0;
}
