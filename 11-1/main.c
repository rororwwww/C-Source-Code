#include <stdio.h>

//��ʵ�ʱ���У���Щ���ݵ�ȡֵ���������޵ģ�ֻ���Ƿǳ�������������
//�������Ϊÿ��ֵ��ȡһ�����֣��Է����ں���������ʹ��
//����һ������ֻ�����죬һ��ֻ��ʮ�����£�һ����ÿ�������ſγ̵ȡ�


//#define Mon 1
//#define Tues 2
//#define Wed 3
//#define Thurs 4
//#define Fri 5
//#define Sat 6
//#define Sun 7

//#define������Ȼ�ܽ�����⣬��Ҳ�����˲�С�ĸ����ã����º������࣬������ɢ

enum week{ Mon = 1, Tues, Wed, Thurs, Fri, Sat, Sun };
//C�����ṩ��һ��ö�٣�Enum�����ͣ��ܹ��г����п��ܵ�ȡֵ����������ȡһ�����֡�

//ö�ٺͺ���ʵ�ǳ����ƣ�����Ԥ����׶ν������滻�ɶ�Ӧ��ֵ��ö���ڱ���׶ν������滻�ɶ�Ӧ��ֵ��
//���ǿ��Խ�ö�����Ϊ����׶εĺꡣ

enum{
  array=10
};
//enum�����ڴ��������ĳ���

int main()
{
    enum week today=Mon;
    //enum��ʹ��

    switch (today) {
    case 1:
        printf("Mon\n");
        break;
    default:
        break;
    }


    int A[array]={0};

    for(int i=0;i<10;i++)
        printf("%d\n",A[i]);
    return 0;
}


