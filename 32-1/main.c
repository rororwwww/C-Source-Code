#include <stdio.h>

typedef int(AINT5)[5];

int main()
{
    AINT5 a={0,1,2,3,4};
    //a���������Ϊint[5];

    AINT5* p=&a;
    //ָ��int[5]���͵�ָ��p
    //����ָ����ָ�����������ָ��
    int(*pt)[5]=&a;


    printf("%d\n",(*p)[2]);
    //����ָ����ָ������ԣ�*pΪָ��ָ���ڴ��ֵ��a����
    printf("%p\n",p);
    //pָ���ֵ Ϊ����a�ĵ�ַ

    return 0;
}
