#include <stdio.h>

typedef struct _tag_ts
{
    int a;
    char b;
}Ts;        //�Զ����������� ������Ҳ�����ڻ��̶ֹ��ڴ��С
int main()
{
    int a;              //�������������������� �������ڴ�ռ��Сȡ��������������������
    a=2;                //����ͨ�������������������ڴ�ռ�
    printf("%d\n",a);
    printf("%d\n",sizeof(a));
    Ts c;
    printf("%d\n",sizeof(c));

    char* p;
    printf("%d\n",sizeof(p));

    return 0;
}
