/*
    �׳Ƶı�������gcc,bcc������ Ԥ��������������������������������

    1.Ԥ�������� ��Щ�����ı����滻������ �ո����ע�ͣ�����#include��#define�궨����ı��滻
    #if��#ifdef����������Ĵ���

    gcc -E file.c -o file.i


    2.�������� ��Ԥ�������ļ�(file.i)�����﷨�������ʷ��������������������������Դ�������Ż�
    ���ɻ���ļ�

    gcc -S file.i -o file.s

    3.�����: �Ի���ļ�(file.s)���л�࣬���ɶ������ļ������ָ���ɻ�������ִ�еĻ���ָ�ÿ
    �����ָ���Ӧ�����Ƶ�һ������ָ��

    gcc -C file.s -o file.o

    4.������: ��20-1


*/