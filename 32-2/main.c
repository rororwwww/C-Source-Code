#include <stdio.h>

int main()
{
    char* a[]={"abc","def","gh"};
    //ָ��������һ��Ԫ�ض�Ϊָ�������
    //ָ�����������������
    //a���� ��һ��Ԫ�����Ͷ�Ϊchar* ��3��Ԫ�ص�����

    printf("%s\n",a[0]);
    printf("sizeof(a)=%d",sizeof(a));
    //3x4=12

    return 0;
}
