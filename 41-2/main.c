#include <stdio.h>
#include <malloc.h>
#include <string.h>
struct Student
{
    char* name;
    int number;
};

char* func(){
    char* p[]="Hello";
    return p;
}

int main()
{
    struct Student s1;
    //s1.name�ֲ�ָ�����û�г�ʼ��Ұָ��
    char* p=func();
    
    //�������ؾֲ��ĵ�ַ��Ұָ��

    p=(char*)malloc(sizeof(char)*5);

    strcpy(p,"STRCPYANDSNPRINTF");
    //�ڴ������û�г�����Ϣ���ڴ����Խ�磬Ұָ��
    //�ĳ�snprintf
    return 0;
}
