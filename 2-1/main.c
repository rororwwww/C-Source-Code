#include <stdio.h>

int main()
{
    int sign;
    char c=5;
    short s=-1;
    int i=7;

    sign=(c & 0x80);        //c��1000 0000 ��λ�� ��Ϊ0 ��c�����λΪ0 ����Ϊ0 ��c�����λΪ1
    if(sign == 0)
        printf("c=%d���λΪ0\n",c);
    else
        printf("c=%d���λΪ1\n",c);

    sign=(s & 0x8000);
    if(sign == 0)
        printf("s=%d���λΪ0\n",s);
    else
        printf("s=%d���λΪ1\n",s);

    sign=(i & 0x80000000);
    if(sign == 0)
        printf("i=%d���λΪ0\n",i);
    else
        printf("i=%d���λΪ1\n",i);


    return 0;
}
