#include <stdio.h>

struct Ts
{

};
//�ִ�C����������սṹ�� ��������

struct SoftArray{
    int len;
    int array[];
    //sturct�����һ��Ԫ�ؿ�����δ֪��С������
};
//����struct������������


struct SoftArray* CreatSoftAarray(int i){
    struct SoftArray* ret= NULL;
    if(i>0){
        ret=(struct SoftArray*)malloc(sizeof(struct SoftArray)+sizeof(int)*i);
        ret->len=i;
        //��Ȼmalloc()������������(void *),�κ����͵�ָ�붼����ת����(void *),������û�����ǰ�����ǿ������ת����
    }
    return ret;
}
//��ʼ����������

int main()
{
    printf("TS sizeof of=%d\n",sizeof(struct Ts));
    struct SoftArray* sa=CreatSoftAarray(10);

    for(int i=0;i<sa->len;i++){
        sa->array[i]=i+1;
    }//len��������ĳ�����Ϣ

    for(int i=0;i<sa->len;i++){
        printf("%d\n",sa->array[i]);
    }
    return 0;
}
