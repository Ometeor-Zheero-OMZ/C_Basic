#include <stdio.h>
#include <string.h>

int main()
{
    long multiple[] = {15L, 25L, 35L, 45L};
    long *p = multiple;

    // sizeof(multiple) = 16 and sizeof(multiple[0]) = 4, so i is incremented until it is 3
    for(int i = 0; i < sizeof(multiple) / sizeof(multiple[0]); ++i)
        printf("address p + %d (&multiple[%d]): %llu\t *(p + %d) value: %d\n", i, i, (unsigned long long)(p + i), i, *(p + i));

    printf("\n Type long occupies: %d bytes\n\n", (int)sizeof(long));

    return 0;
}
