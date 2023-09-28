#include <stdio.h>

// int arraySum(int array[], const int n);
// int arraySum(int *ptr, const int n);
int arraySum(int *array, const int n);


int main()
{
    int arraySum(int *array, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i\n", arraySum(values, 10));

    return 0;
}

// int arraySum(int *array, const int n)
// {
//     int sum = 0;
//     int *const arrayEnd = array + n;

//     for(; array < arrayEnd; ++array)
//         sum += *array;

//     return sum;
// }

// int arraySum(int array[], const int n)
// {
//     int sum = 0, *ptr;
//     int *const arrayEnd = array + n;

//     for(ptr = &array[0]; ptr < arrayEnd; ++ptr)
//         sum += *ptr;

//     return sum;
// }

int arraySum(int *ptr, const int n)
{
    int sum = 0;
    int *const arrayEnd = ptr + n;

    for(; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}
