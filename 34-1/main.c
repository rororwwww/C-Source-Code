#include <stdio.h>

void change(int* p,int a){

    p=&a;

}

//ָ��ҲҪ���д�ֵor��ַ����


void new_change(int** p,int a){

    *p=&a;

}

int main()
{
    int a=3;
    int b=5;
    int* p=a;

    printf("0x%p",p);

    change(p,b);
    //ָ��p���еĴ�ֵ���ã���ֵ�����β�p���βα䣬ʵ�β���

    printf("0x%p",p);

    new_change(&p,b);
    //ָ��p���еĴ�ַ���ã�&p��ֵ�����β�p

    printf("0x%p",p);

    return 0;
}
