#include <stdio.h>
#include <stdbool.h>
#define EPSINON 0.00000001
int main()
{
    bool a=true;
    int b=0;
    float c=0.0;
    if(a)
        printf("bool�͵ı���ֱ����Ϊif������\n");
    if(0 == b)
        printf("������0ֵ�Ƚ� 0ֵ�ڱȽϷ������\n");
    if((-EPSINON <=c)&&(c<=EPSINON))
        printf("��������0ֵ�Ƚ� ��Ҫ���徫��\n");


    return 0;
}
