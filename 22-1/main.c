#include <stdio.h>

#define C 2

int main()
{
#if (C==1)
    printf("#if");
//��������Ԥ����׶���Ԥ����������������֧
//����������ѡ�������б���

#else
    printf("#else");
#endif
    return 0;
}
