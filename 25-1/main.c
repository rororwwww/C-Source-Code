#include <stdio.h>

#define STRING(s) #s
//#�������Ԥ����׶Σ��������ת��Ϊ�ַ���(������fת��Ϊ�ַ���f)


#define CALL(f,p) (printf("%s\n",#f),f(p))
//ͨ��#������Ѻ�����ת��Ϊ�ַ�����ӡ

#define CONNECT(a,b) a##b
//##�������Ԥ����׶Σ��������ճ����һ��(������a,bճ����ab)
//#�����ں궨�壬������Ԥ������

#define STRUCT(type) typedef struct _tag_##type type;struct _tag_##type

STRUCT(student)
{
    int stdid;
    char* stdname;
};

int square(int p){
    int ret=p*p;
    return ret;
}

int main()
{
    printf("%s\n",STRING(Hello));

    int x=CALL(square,4);
    //printf("%s",square),square(4);
    //#��squareת����"square"�ַ���
    printf("%d\n",x);

    student s1;


    return 0;
}
