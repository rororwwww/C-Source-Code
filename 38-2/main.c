#include <stdio.h>
#include <malloc.h>

#define SIZE 3

void f(int* p){
    for(int i=0;i<SIZE;i++)
        printf("%d\n",p[i]);
}

int main()
{
    int* p=malloc(SIZE*sizeof(int));
    //malloc�Ĳ���Ϊ�ֽڴ�С���ڴ治����ʼ��Ϊ���ֵ

    f(p);


    int* p2=calloc(SIZE,sizeof(int));
    //calloc����Ϊnum��size���ڴ��ʼ��Ϊ0
    f(p2);

    int* p3=realloc(p,sizeof(int)*2*SIZE);
    //realloc�����ڴ�ռ��С




    return 0;
}
