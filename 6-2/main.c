#include <stdio.h>

void f1(int i){
    if(i<60)
        printf("Failed\n");
    else if(60>=i && i<=80)
        printf("Good\n");
    else
        printf("Excellent\n");
}
//if��������ڷ�Χ�����жϵ����

void f2(int i){
    switch (i<60) {
    case 1:
        printf("Failed\n");
        break;
    default:
        switch (60>=i && i<=80) {
        case 1:
            printf("Good\n");
            break;
        default:
            printf("Excellent\n");
            break;
        }
        break;
    }
}
//if��switch����

void f3(char c){
    switch (c) {
    case 'A':
        printf("Apple\n");
        break;
    case 'B':
        printf("Banana\n");
        break;
    case 'C':
        printf("Cat\n");
        break;
    default:
        printf("Unkonw\n");
        break;
    }

}
// switch��������ڵ�ֵ���֦���
// caseֵ���У� 1.����ĸ�������ֵ�˳�� 2.������ǰ �쳣�ں� 3.defalut���ڴ����������쳣

void f4(char c){
    if('A' == c)
        printf("Apple\n");
    else if('B' == c)
        printf("Banana\n");
    else if('C' == c)
        printf("Cat\n");

}

int main()
{
    f1(85);
    f2(85);
    f3('B');
    f4('C');

}
