#include <stdio.h>

#define PATH1 "C:\\Users\\Administrator\\Desktop\\C Code"
//#define��Ԥ����������ĵ�Ԫ
//#define�ǵ������ı��滻

#define DIM(a) sizeof(a)/sizeof(*a)
//#define�����ں������� ���Ⱥ������ø���ǿ��

void def(){
    #define PI 3.1415926
    //#define��������еĴ���鶼���� ���������޶�
}


int main()
{
    printf("[%s] {%s:%d}\n", __DATE__, __FILE__, __LINE__);
    float pi=PI;
    char* p=PATH1;
    int a[10];
    printf("%d",DIM(a));
    return 0;
}
