#include <stdio.h>

int main()
{
    float f=3.3;
    float f2=123456789;
    //float与int 相同32位 32组01组合
    //float的特殊表示法带来了更大的范围同时意味着float的不连续与不精确
    printf("%.10f\n",f);
    printf("%f\n",f2);
    //float的不连续

    float b=0.1;
    if(b==0.1){
        printf("b=0.1\n");
    }
    else
        printf("b!=0.1\n");
    //float的不精确

    printf("%.10f\n",b);

    return 0;

    /*浮点数虽然表示范围大，但是其范围并不是连续的。
    这句话的意思是，比如说1、2、3可以表示1-3的范围，但是如果我每隔一段距离表示一个数的话，那我表示的范围就会迅速扩大，比如我每隔两位表示一个数，那么尽管我依旧只可以表示3个数，但我表示的数为1、3、5，相对于表示的范围扩大到了1-5.

    而且这个每两个数所相隔的距离不是平均相等的，往往数越大间隔也越来越大。



    因为精度的问题，我们往往不用float a==float b或float a==0进行判断！
    解决办法：

    1.float和double只能用来做科学计算或者是工程计算，在商业计算中我们要用java.math.BigDecimal。使用BigDecimal并且一定要用String来够造。

    2.先化为整数再比较。比如23.56与23.49比较，我们化为整数，比较2356与2349大小。*/

}
