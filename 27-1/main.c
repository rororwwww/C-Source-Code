#include <stdio.h>

int main()
{
    int i=100000;

    int* ip=&i;
    char* cp=&i;

    printf("ip=%p\n",ip);
    printf("cp=%p\n",cp);
    //ip��cp��ָ��ͬһ����ʼ��ַ����ʼ��ַ��ͬ�����ڵ�ַ��ͬ cp��ip�ĵ�ַ�ĳ��Ȳ�ͬ
    printf("ip=%d\n",*ip);
    printf("cp=%d\n",*cp);
    //ipָ��i�ĳ�ʼ��ַ4�ֽڵĳ���
    //cpָ��i�ĳ�ʼ��ַ1�ֽڵĳ���



    int a[10];
    printf("%p\n",a);
    //����������������Ԫ�صĵ�ַ
    printf("%p\n",&a);
    //&a��������Ԫ�صĵ�ַ
    printf("%p\n",&a[0]);
    //a�ĵ�ַ��&a����a��һ��Ԫ�صĵ�ַ(&a[0])��ʼ��ַ��ͬ ��ַ�ĳ��Ȳ�ͬ
    //&a[0]ָ���ʼ��ַ4�ֽڵĳ���
    //aָ���ʼ��ַ40�ֽڵĳ���

    printf("%p\n",a+1);
    printf("%p\n",&a+1);

    return 0;
}
