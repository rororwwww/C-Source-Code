#include <stdio.h>
#include <malloc.h>

int main()
{

    int* p=(int*)malloc(sizeof(int)*4);

    if(!p){

    }//�ڴ����ϰ��1:���malloc�Ƿ�����ɹ�

    free(p);
    p=NULL;
    //free������ֵNULL����Ұָ��

    int* p2=(int*)malloc(sizeof(int)*4);
    //��֤malloc��freeһ��һƥ��
    //malloc����free�ڴ�й©

    //free����malloc ����Ұָ�� �������

    return 0;
}
