#include <stdio.h>

int main()
{
    int i=0;
    int n=0;

    n=(i++)+(i++)+(i++);
    //C语言只规定了自增和取值的相对顺序 两条指令不一定连续运行
    //且参与混合运算中途有可能被打断

    //理想情况: 取值i i++ 取值i i++ 取值i i++
    //实际情况: 取值i 取值i 取值i i++ i++ i++


    printf("i=%d\n",i); //3
    printf("n=%d\n",n); //3

    n=(++i)+(++i)+(++i);
    //理想情况: i++ 取值 i++ 取值 i++ 取值
    //实际情况: i++ i++ 取值 取值 i++ 取值

    //在实际中，要避免++ --的混合运算

    printf("i=%d\n",i); //6
    printf("n=%d\n",n); //16



    return 0;
}
