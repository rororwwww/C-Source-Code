#include <stdio.h>

#pragma pack (4)

struct  Test1
{
    char c1;
    short s;
    char c2;
    int i;
}Test1;

struct  Test2
{
    char c1;
    char c2;
    short s;
    int i;
}Test2;



//�ڴ���룺 CPU���ڴ�Ķ�ȡ������������ģ���Ҫ�ֿ����
//          �ڴ��е�����Ҳ��Ҫ�ڴ����
//��#pragma packָ���ڴ�������
int main()
{

    printf("Test1=%d\n",sizeof(Test1));
    printf("Test2=%d\n",sizeof(Test2));
    return 0;
}
