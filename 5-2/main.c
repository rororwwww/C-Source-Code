#include <stdio.h>

extern int c;
//extern �ؼ������α�����������c�������ط�����
extern int b;
extern int getI();
//extern �ؼ������κ������������������ط�����
extern int GetI();
int main()
{
    printf("%d",c);
    printf("%d",b);
    //bȫ�ֱ�����static���Σ�ʹ��ȫ�ֱ���bֻ��������test.c������ error

    printf("%d",getI());
    //getI������static���Σ�ʹ��getI()ֻ��������test.c������ error
    printf("%d",GetI());


    return 0;
}


