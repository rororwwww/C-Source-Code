#include <stdio.h>

//��������ʱ�Ǵ���ʵ�εĸ���


void swap1(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
}
//��ֵ���� ֻ�ܸı�ʵ�εĸ���

void swap2(int* a,int* b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
//��ַ���� ���Ըı�ʵ��


int main()
{
    int a=3;
    int b=4;
    printf("a=%d,b=%d\n",a,b);
    swap1(a,b);
    printf("a=%d,b=%d\n",a,b);
    swap2(&a,&b);
    printf("a=%d,b=%d\n",a,b);

    return 0;

}
