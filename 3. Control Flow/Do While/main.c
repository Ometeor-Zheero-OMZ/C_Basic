#include <stdio.h>

int main() {
    // Logic Controlled
    int num;

    printf("the programm lasts untill the number 20 is entered: ");

    do
        scanf("%d", &num);
    while (num != 20);

    // Counter Controlled
    // int num = 4;
    // do
    // {
    //     printf("\nNumber = %d", num);
    //     num++;
    // }
    // while (num < 4);

    return 0;
}
