#include <stdio.h>
const char* f(const int i){
    i=6;
    //������const���� �޸ĺ�������� error
    return "YouZhiQiang";
}
//const ���κ������� ��ʾ��ϣ���ں������ڸı����
//const ���η���ֵ ��ʾ����ֵ���ɸı�
//�ַ������������ڳ���ֻ���洢��
int main()
{
    const char* p=f(0);
    printf("%s",p);
    return 0;
}
