#include <stdio.h>

int main()
{
    int a[5]={0,1,2,3,4};

    printf("a=%p\n",a);
    printf("*a=%d\n",*a);
    printf("*(a+1)=%d\n",*(a+1));
    //���鵱ָ��ʹ��

    printf("sizeof(a)=%d\n",sizeof(a));
    printf("&a=%p\n",&a);
    //�����鲻����ָ��

    int* p=a;
    for(int i=0;i<5;i++)
        printf("p[%d]=%d\n",i,p[i]);
    //ָ�뵱����ʹ��

    int* b={0,1,2,3,4};
    printf("%d",b);
    printf("%d",*b);
    //��ָ��Ҳ����������

    return 0;
}
