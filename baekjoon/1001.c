#include <stdio.h>

int main(void)
{
    printf("int 자료형의 크기: %d바이트\n", sizeof(int));
    printf("float 자료형의 크기: %d바이트\n", sizeof(float));
    printf("char 자료형의 크기: %d바이트\n", sizeof(char));
    printf("double 자료형의 크기: %d바이트\n", sizeof(double));
}

//gcc 1001.c
// ./a.out  으로 실행