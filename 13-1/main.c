#include <stdio.h>

#define swap(a,b) {\
    int temp=a;    \
    a=b;           \
    b=temp;}
//�������ʺ����ں����� ���ӿɶ���

int main()
{
    printf("Hello\
world!\n");
    //����׶Σ�������ɾ�������������ڷ�б�ܺ�����ַ��Զ�������ǰһ��

    int v=3;
    int u=4;
    swap(v,u);

    return 0;
}
