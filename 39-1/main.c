#include<stdio.h>
#include<malloc.h>

int* f(){
    int a[3]={0,1,2};
    return a;
}
//������ջ�ռ䣬���ų���ķ��ر�����,���Ժ������ܷ��ؾֲ������ĵ�ַ
int* f2(){

    int* p=(int*)malloc(3*sizeof(int));
    //malloc����Ķѿռ䲻�����ź����ķ��ض����٣������ͷ�֮ǰ������
    for(int i=0;i<3;i++)
        p[i]=i;
    return p;

}

int main()
{
    int* p=f2();
    for(int i=0;i<3;i++)
        printf("%d",p[i]);

    int* p2=f();
    for(int i=0;i<3;i++)
        printf("%d",p2i]);

    return 0;
}
