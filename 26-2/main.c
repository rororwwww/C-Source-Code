#include <stdio.h>

int main()
{
    int i=3;
    const int* p1=&i;
    //const������*��ߣ�(*p)���ɱ䣬p�ɱ�;
    int* const p2=&i;
    //const������*�ұߣ�p���ɱ䣬*p�ɱ�;

    p1=NULL;
    p2=NULL;
    //p2���ɱ�

    *p1=4;
    //*p1���ɱ�
    *p2=4;

    return 0;
}
