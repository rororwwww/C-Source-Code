#include <stdio.h>

int main()
{

    int a=1;
    int b=2;
    int c;
    c = a?b:a;
    //��Ŀ������ı�����if-else
    printf("%d\n",c);

    a?b:a=3;
    //��Ŀ��������ص��� ֵ ���Ǳ���
    //2=3; error
    //���÷��ص�ַ�� ���ر���

    *(a?&b:&a)=3;
    printf("%d\n",b);


    char c1=0;
    printf("%d\n",sizeof(c1?c1:a));
    //��Ŀ������ķ������� ��c1��ʽ����ת����a���� ����

    return 0;
}
