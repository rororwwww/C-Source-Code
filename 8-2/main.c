#include <stdio.h>

f1(){

}

void f2(void){

}

void MemSet(void* src, int length, unsigned char n){
    unsigned char* p=(unsigned char*)src;
    //void*ָ����Ϊ��ֵʹ����Ҫ����ǿ������ת��
    for(int i=0;i<length;i++){
        p[i]=n;
    }
}

int main()
{
    f1(1,2,3,4,5);
    //Ĭ�Ͻ���������� ����ֵ����Ϊint
    f2();
    //void ��ʾ�޲��� �޷���ֵ
    //void a;
    //������void���ͱ��� error
    void *p;
    //����void* ����ָ��

    int a[5];
    char b[10];

    MemSet(a,sizeof(a),0);
    MemSet(b,sizeof(b),3);

    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }

    printf("\n");

    for(int i=0;i<10;i++){
        printf("%d\n",b[i]);
    }


    return 0;
}
