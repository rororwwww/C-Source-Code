#include <stdio.h>

typedef void i3(void);
//�������� �ɷ������ͣ������б�ȷ����ͨ��typedef������

i3 f;


void f(void){
    printf("test");
}

int main()
{
    i3* p;
    //Ҳ��д�� void (*p)(void);
    p=f;
    //�����ĺ�����ֵΪ��������ڵ�ַ

    p();
    //ͨ��������ַ�����ú���

    printf("%p\n",f);

    p=0x0000000000401530;
    //���ú���ָ�룬��ָ����ַ��ʼִ�к���
    p();
    return 0;
}
