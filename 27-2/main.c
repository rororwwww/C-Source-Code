#include <stdio.h>

int main()
{
    int a[10]={1};
    int* p;
    p=a;
    //�����������ʱ�򷽱������Ե�������ָ��������
    printf("p=%p\n",p);
    printf("a=%p\n",a);

    printf("a[0]=%d\n",*a);
    printf("a[1]=%d\n",*(a+1));

    //������&��sizeofʱ���ܵ�������ָ��
    printf("&p=%p\n",&p);
    printf("&a=%p\n",&a);
    //&ʱ��&p��ָ�뱾��ĵ�ַ��&a������ĵ�ַ

    printf("sizeof(p)=%d\n",sizeof(p));
    printf("sizeof(a)=%d\n",sizeof(a));
    //sizeofʱ��sizeof(p)��ָ��p���ڴ��С��4����sizeof(a)������a���ڴ��С��40��


    return 0;
}
