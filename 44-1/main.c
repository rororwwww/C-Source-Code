#include <stdio.h>

void f(int a,int b){

    printf("a=%d,b=%d",a,b);
}
int main()
{
    int i=0;

    f(i++,i++);
    // b=i++��ִ��  a=i++��ִ��
    // ������������ֵ˳�������ڱ�����
    return 0;
}
