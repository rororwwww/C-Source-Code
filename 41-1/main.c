#include <stdio.h>
#include <malloc.h>

int* f(){
    int b=5;
    return &b;
}

int main()
{
    int* p=123456;
    //���������ת����pָ��ָ����Ч��ַ

    int* p2;
    //�ֲ�ָ�����û�г�ʼ����p2ָ����Ч��ַ

    int* p3=(int*)malloc(sizeof(int));
    free(p3);
    //ʹ�����Ѿ��ͷŵ�ָ�룬p3ָ����Ч��ַ

    int a=3;
    int* p4=&a;

    p4=p4+5;
    //�����ָ�����㣬p4ָ����Ч��ַ������Խ��

    int* p5=f();
    //���ؾֲ������ĵ�ַ��f�����ľֲ������Ŀռ��ڷ��غ�����


    printf("%d\n",*p2);

    return 0;
}
