#include <stdio.h>

int main()
{
    int* p=NULL;
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+1);
    //ָ������������ p+1=p+1*sizeof(int)=0+4=4

    int a[10]={0};
    int* begin=a;
    char* cbegin=a;
    int* end=a+10;
    char* cp=&a[3];

    //int length=end-cp;
    //ָ����ָ��ֻ֧�ּ������� �Ҳ��������ָ�����ͱ�����ͬ error

    int size=end-begin;
    //ֻ������ָ��ָ��ͬһ������ʱ ָ�������������
    printf("a size=%d\n",size);

    for(p=begin;p<end;p++){
        printf("%d\n",*p);
    }
    //ֻ������ָ��ָ��ͬһ������ʱ ָ��֮��Ĺ�ϵ����(< > <= )��������
    
    printf("cbegin=%p\n",cbegin);
    printf("begin=%p\n",begin);
    if(cbegin==begin)
    	printf("==");
    else 
    	printf("!=");

    return 0;
}
