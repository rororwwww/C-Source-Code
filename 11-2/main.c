#include <stdio.h>

int f1(){
    printf("f1()��ִ��");
    return 0;
}

int main()
{
    int var=0;
    int size=sizeof(var++);
    //sizeof�ڱ�������У��ѱ�������ֵ�滻
    //�ڱ�������У�sizeof()ֱ�ӱ��滻��4,var++ʧЧ
    printf("var=%d,size=%d",var,size);

    size=sizeof(f1());
    //f1()��û������,sizeof�����������޹�
    //sizeof()�ڱ����ڼ�ֱ�ӱ�����4
    //size=4;
    return 0;
}
