#include <stdio.h>

#define C -1

#if C==-1
    #error C value is error.
    //#error���ڳ���Ա�Զ���һ�����������Ϣ �����Ʊ��� ����������Ϣ�����ʧ��
#endif
#ifndef C
    #warning C value is not defined.
    //#warning���ڳ���Ա�Զ���һ�����뾯����Ϣ ����������Ȼ������ִ�г���
#endif

int main()
{
    return 0;
}
