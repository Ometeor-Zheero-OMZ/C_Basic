/*
    signedとunsignedの違いは最上位ビットをどのように扱うかの違いである。
    signedは最上位ビットを符号（0がプラス、1がマイナス）として利用し、unsignedでは値の一部として使う。
*/

#include <stdio.h>

int main() {
    // unsigned（符号なし）のint型 「0からプラスの値」しかとれない変数
    unsigned int a = 60; // 0011 1100
    unsigned int b = 13; // 0000 1101

    // signed（符号あり）のint型　「マイナス～0, そしてプラス」の値を取ることができる変数
    int and, or, xor, tilde, shiftToLeft, shiftToRight = 0;

    // 0000 1100
    and = a & b;
    // 0011 1101
    or = a | b;
    // 0011 0001
    xor = a ^ b;
    // 1100 0011
    tilde = ~a;
    // 1111 0000
    shiftToLeft = a << 2;
    //0000 0011
    shiftToRight = a >> 4;


    printf("The value of AND is %d\n", and);
    printf("The value of OR is %d\n", or);
    printf("The value of XOR is %d\n", xor);
    printf("The value of tilde is %d\n", tilde);
    printf("The value of shiftToLeft is %d\n", shiftToLeft);
    // 0011 1100 0000
    shiftToLeft = a << 4;
    printf("The value of shiftToLeft is %d\n", shiftToLeft);
    printf("The value of shiftToRight is %d\n", shiftToRight);

    return 0;
}
