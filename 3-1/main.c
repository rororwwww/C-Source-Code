#include <stdio.h>

int main()
{
    float f=-8.25;      //浮点数在内存中的表示 -8.25=>1000.01=>1.00001x2^3
                        //1位符号位+8位指数位+23位指数位
                        //符号位1 指数127+3=130=>1000 0010 尾数00001
                        //1100 0001 0000 0100 0000 0000 0000 0000
    unsigned int* p;

    p=&f;

    printf("0x%08x\n",*p);

    return 0;
}
