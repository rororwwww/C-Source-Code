#include <stdio.h>
#include <string.h>

int main()
{
    char buf[10]={0};
    char* str="abc%s";

    snprintf(buf,sizeof(buf),str,"Test");
    printf("%s\n",buf);
    //snprintf��ʹ�ã������и�ʽ����Ϣ������Ҫ���ϵ��ĸ�����

    if("abc"=="abc"){
        printf("Equal\n");
    }else
        printf("UnEqual\n");
    //gcc�Ż�����Equal��bcc���Ż���Ϊ�����ַ�����ַ��ͬ UnEqual

    if(strcmp("abc","abc")==0){
        printf("Equal\n");
    }else
        printf("UnEqual\n");

    //strcmp�����Ƚϵ��ַ��������� Equal
    //�ַ����Ƚ�Ҫʹ��strcmp



    return 0;
}
