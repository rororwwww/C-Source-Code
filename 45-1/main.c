#include <stdio.h>
#include  <stdarg.h>

int f(int n,...){

    int ret=0;
    int i;
    va_list varg;
    //va_list�����ɱ�������б�
    va_start(varg,n);
    //va_start�󶨿ɱ�������б�n����Ĳ����ǿɱ����
    for(i=0;i<n;i++){
        ret+=va_arg(varg,int);
        //va_argʹ�ò����б���Ĳ���������ָ��Ϊint

    }
    va_end(varg);
    //va_end�Բ����б��ͷţ����ʽ���

    return ret;

}
//�ɱ����������������һ��ȷ���Ĳ���
//���⺯���ڲ��޷���֪�ɱ���������������

int main()
{
    printf("1+2+3+4=%d\n",f(4,1,2,3,4));
    printf("1+2=%d",f(2,1,2));
    return 0;
}
