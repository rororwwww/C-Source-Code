#include <stdio.h>

void TestGoto(void)
{
    int i;

    while (1)
    {
        for (i = 0; i < 10; i++)
        {
            if (i > 6)
            {
                goto label;
            }
            printf("%s : i = %d\n", __FUNCTION__, i);
        }
    }
    label:
        printf("test goto end!");
}

int main()
{
    TestGoto();
    //goto�ƻ���C���ԵĽṹ������:˳��ṹ ѡ��ṹ ѭ���ṹ
    return 0;
}

//ע�⣺���κα�������У���������ʹ�� goto ��䡣��Ϊ��ʹ�ó���Ŀ��������Ը��٣�ʹ�����������������޸ġ�
//�κ�ʹ�� goto ���ĳ�����Ը�д�ɲ���Ҫʹ�� goto ����д����
