#include <stdio.h>

void f1(char a[5]){
    printf("sizeof(a)=%d\n",sizeof(a));
    //���Կ������˻����� char*ָ�� ֵΪ4
    *a='a';
    a=NULL;
    //������Ҳ�ǲ��ܸ�ֵ�� �˻�Ϊָ�����
}

void f2(char a[10]){
    *a='c';
    a=NULL;
}


//������Ϊ��������������ʱ���˻�Ϊָ�룬��ʧ������Ϣ

int main()
{
    char a[3];

    f1(a);
    printf("%c",a[0]);
    //  ��Ϊָ��������к��� ���Ըı�ʵ��

    f2(a);
    printf("%c",a[0]);

    return 0;
}
