#include <stdio.h>
//��������: auto register static extern

register int c;
//ȫ�ֱ�����������Ϊ���������ڼ� ����register���³���ռ�üĴ��� error

int f1(){
    static int r=0;
    //static ���ξֲ����� ʹ�ֲ��������ڳ�����̬��
    r++;
    return r;
}

int f2(){
    int r=0;
    r++;
    return r;
}


int k1=0;

int f3(){
    printf("%d",k1);
    //ȫ�ֱ���k1 �������������� ���ڳ�����̬��
    printf("%d",c);
    //staic���εľֲ����� �����򲻱� ����ֻ�����ڶ����ĺ����� �洢�ڳ�����̬�� error

}

int main()
{
    auto int a=0;
    //auto ��C���Ծֲ�������Ĭ�����Ա��������α����洢��ջ��
    auto int b=0;
    printf("0x%p\n",&a);
    printf("0x%p\n",&b);
    //a,b�ֲ���������ջ�� �ڴ���ַ����
    static int c=0;
    printf("0x%p\n",&c);
    //static���ξֲ�����c ���ڳ�����̬�� �ڴ���ַ��ջ������

    register int d;
    //register ���뽫�������ڼĴ����� ����Ч��
    printf("0x%x",&d);
    //ȡ��ַ��(&) ֻ�������ڴ���ַ error

    for(int i=0;i<=10;i++){
        printf("%d\n",f1());
    }

    for(int i=0;i<=10;i++){
        printf("%d\n",f2());
    }

    return 0;
}
