#include <stdio.h>

typedef int(*weapon)(void);

void fight(weapon wp){
    int result;

    result=wp();
    //�����߲�֪��������ĸ�������ֻ֪���к������Ե���
    printf("result=%d\n",result);

}
//ͨ������ָ��ʵ�ֻص�

int a(void){
   return 1;
}

int b(void){
    return 2;
}

//�ص�������֪��ʲôʱ��ᱻ����

int main()
{
    fight(a);
    fight(b);
    return 0;
}
