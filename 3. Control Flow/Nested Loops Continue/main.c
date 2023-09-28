#include <stdio.h>

int main() {
    enum Day { Monday, Tuesday, Wednesday, Thursday, Friday, Satruday, Sunday };

    for(enum Day day = Monday; day <= Sunday ; ++day);
    {
        if(day == Wednesday)
            continue;

        printf("It's not Wednesday!\n");
        /* Do something useful with day*/
    }

    return 0;
}
