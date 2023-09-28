#include <stdio.h>

int main() {
    int num = 0;
    printf("Enter the number: ");
    scanf("%d", &num);

    // Logic controlled while loop
    while (num != -1)
    {
        printf("Enter another number: ");
        scanf("%d", &num);
    }

    return 0;
}
