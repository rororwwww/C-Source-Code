#include<stdio.h>

int main(int argc, char *argv[])
{
    int a;
    //�ֲ�����,ջ�Ϸ���ռ� �������вŴ���
    static int b;
    //δ��ʼ����static�ֲ����� .bss��
    static int c=1;
    //�ѳ�ʼ����static�ֲ����� .data��
    int* p=(int*)malloc(sizeof(int));
    //malloc����Ķѿռ䣬���Ϸ���ռ� �������вŴ���


    printf("0x%p\n",&a);

    printf("0x%p\n",&c);

    printf("0x%p\n",&b);

    printf("0x%p\n",&p);


    return 0;
}
