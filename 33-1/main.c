#include <stdio.h>

int main(int argc, char *argv[])
//����ϵͳ����main������Ϊ����Ŀ�ʼ
{
	int i;
    for(i=0;i<argc;i++)
        printf("%s\n",argv[i]);
    //����ͨ��main�Ĳ���������������Ϣ�뻷��������Ϣ
    return 99;
    //return����ֵ��Ϊ������˳�״̬
}

