#include <stdio.h>

int main()
{
    int i=3;
    int* p=&i;

    printf("%d,%p\n",i,&i);
    printf("%d,%p\n",*p,p);

    //ָ���Ǵ洢�ڴ��ַ�ı���
    //ָ��ʹ��ʱ��*����ȡָ��ָ���ڴ��е�ֵ

    return 0;
}
