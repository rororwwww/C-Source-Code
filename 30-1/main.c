#include <stdio.h>
#include <string.h>


int main()
{
    char str[]={'a'};
    char string[]={'a','\0'};

    printf("%s\n",string);
    printf("%s\n",str);

    //C������û���ַ�������
    //ͨ����\0��β�������ַ�������ģ���ַ���

    char a[]="ab";
    printf("%c\n",*"ab");
    printf("%c\n",*"ab"+1);//ָ������

    //C���������ַ������� "a"�ĸ���
    //�ַ����������Ե���һ������ָ����ʹ��
    //��ָ��ָ�����ֻ���洢������ַ����飬�������Զ���ĩβ����\0

    char b[]="Hello\0World";
    printf("%s\n",b);
    printf("sizeof(b)=%d\n",sizeof(b));
    //���е��ַ��������Ե�һ��\0Ϊ׼

    return 0;
}
