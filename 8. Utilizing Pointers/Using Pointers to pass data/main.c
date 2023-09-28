#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    // local variable definition
    int a = 100;
    int b = 200;

    printf("Before swap, value of a: %d and address: %p\n", a, &a);
    printf("Before swap, value of b: %d and address: %p\n", b, &b);

    // calling a function to swap the values
    swap(&a, &b);

    printf("After swap, value of a: %d and address: %p\n", a, &a);
    printf("After swap, value of b: %d and address: %p\n", b, &b);

    /**********************************************************************************************
    You can communicate two kinds of informatnion about a variable to a function
        function1(x);
    you transmit the value of x and the function must be declared with the same type as x
        int functino 1(int num)

        function2(&x);
    youtransmit the address of x and requires the function definition to include a pointer to the correct type
        int function2(int *ptr)
    ***********************************************************************************************/
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x; // save the value at address x
    *x = *y; // put into x
    *y = temp; // put temp into y

    return;
}
