#include <stdio.h>

const int b=3;

int main()
{
    const int i=5;
    printf("%d\n",i);
    int* p=&i;
    *p=7;
    printf("%d\n",i);
    //const���εı������������ĳ���
    //ֻ�Ǹ��߱������ı������ܳ����ڵȺ����

    printf("%d\n",b);
    p=&b;
    //*p=7;
    printf("%d\n",b);
    //wingw�ȱ�׼����������const��ȫ���������ڽ����Ż�
    //gcc���ִ��������������ֻ���洢���������ɸı�
	
    return 0;
}

