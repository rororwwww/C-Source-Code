#include <stdio.h>
#include <stdlib.h>
int f1(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); //������Դ
    do
    {
        if(NULL == p) break;

        if(n < 0) break;

        for(i=0; i<n; i++)
        {
            p[i] = i;
            printf("%d\n", p[i]);
        }

        ret = 1;
    }while(0);

    free(p); //�ͷ���Դ

    return ret;

}

int f2(int n)
{
    int i = 0;
    int ret = 0;
    int* p = (int*)malloc(sizeof(int) * n); //������Դ

    if(NULL == p)
    {
        free(p); //�ͷ���Դ(��1��)

        return 0;
    }

    if(n < 0)
    {
        free(p); //�ͷ���Դ(��2��)

        return 0;
    }

    for(i=0; i<n; i++)
    {
        p[i] = i;
        printf("%d\n", p[i]);
    }

    free(p); //�ͷ���Դ(��3��)

    return 1;
}


int main()
{
    f1(10);
    f2(10);
    return 0;
}

//���Կ����ڵڶ���д��������free��3�Σ������free�ͻ�����ڴ�й©��
//���ڵ�һ�ַ���������ֻfree��һ�Σ������ڴ��ͳһ���䡢ͳһ�ͷţ�
//����Ȼ��һ�ַ������ã����������Ǿ������ʹ����һ��do...while(0)�����������⣡��
