#include <stdio.h>

union un{
    int a;
    char c;
};
//union��ʹ����struct����

int main()
{
    union un u;
    printf("sizeof of u=%d\n",sizeof(u));
    //unionֻ��������Ա�Ŀռ䣬���г�Ա��������ռ�

    u.a=0x12345678;
    printf("0x%x",u.c);
    //union��ʹ���ܵ�ϵͳ��С�˵�Ӱ��

    //�͵�ַ��ȡ��λ����(0x78) С��ϵͳ
    return 0;
}
