#include <stdio.h>

#define RESET(p,len) while(len>0) ((char*)p)[--len]=0

void f(void* p,int len){

    while(len>0)
        ((char*)p)[--len]=0;

}

//��ͺ�����������ɵĹ���
//�����ı��滻�����ڲ���û�����ͼ���뾯�� ���״�


int main()
{
    int len=30;
    int arr[6]={0,1,2,3,4,5};


    for(int i=0;i<6;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }


    RESET(arr,len);
    //RESET(6,len);
    //ֱ�ӵ��ı��滻�����������κξ���
    //f(6,len);
    //ʵ���βε�����ת�����������ͼ�龯��


    for(int i=0;i<6;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }


    return 0;
}
