#include <stdio.h>

void swap(int x, int y);

int main()
{
    // local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d and address: %p\n", a, &a);
    printf("Before swap, value of b: %d and address: %p\n", b, &b);

    // calling a function to swap the values
    swap(a, b);

    printf("After swap, value of a: %d and address: %p\n", a, &a);
    printf("After swap, value of b: %d and address: %p\n", b, &b);

    /*********************************************************************************************
    At this point, those values and addresses cannot be swapped or changed.
    Go to the folder "Using pointers to pass data" and check how this code can be changed.
    The key point is to declare "int *x, int *y and swap(&a, &b)"
    **********************************************************************************************/
    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x; // save the value of x
    x = y; // put into x
    y = temp; // put temo into y

    return;
}
