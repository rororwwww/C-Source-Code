#include <stdio.h>

void f1(int n){
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
            break;
        printf("%d\n",i);
    }
}
//break ��ʾ ��ֹѭ����ִ��

void f2(int n){
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0)
            continue;
        printf("%d\n",i);
    }
}
//continue ��ʾ ��ֹ����ѭ�� �����´�ѭ��

int main()
{
    f1(100);
    f2(100);

    return 0;
}
