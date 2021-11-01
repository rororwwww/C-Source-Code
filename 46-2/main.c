#include <stdio.h>
#include <malloc.h>

#define MALLOC(type,n) (type*)malloc(sizeof(type)*n)
#define FREE(p) free(p),p=NULL

#define _LOG_p(p) printf("%s=%p\n",#p,p)

//����԰������ı�������ʹ�� ����������

int main()
{
    int* p=MALLOC(int,5);

    _LOG_p(p);

    FREE(p);


    _LOG_p(p);

    return 0;
}
