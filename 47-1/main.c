#include <stdio.h>

int str(char* p){

    if(*p=='\0')
        return 0;
    if(*p!='\0')
        return str(p+1)+1;

   //���ģ����ֽ��С��ģ���� ��p�ĳ���ֻ��Ҫ��p+1�Ӵ��ĳ����ټ�1

}
//strlen�ĵݹ�

int fac(int n){

    if(n>=3){
        return fac(n-1)+fac(n-2);
    }
    //������ֽ����ͬ��С��ģ����
    if(n==2||n==1)
        return 1;
    //�߽��������� �ݹ����
}
//쳲��������� �ݹ�

int main()
{
    printf("%d\n",fac(8));

    printf("strlen=%d",str("Hello"));
    return 0;
}
