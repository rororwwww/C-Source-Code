#include <stdio.h>

int f(int a,int b);
//f������

int main()
{
    extern int a;
    //a������
    printf("%d",a);
    return 0;
}
