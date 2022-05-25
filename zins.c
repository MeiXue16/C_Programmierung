#include<stdio.h>
#include<math.h>     // 一些数学公式需要调用这个头文件
int main()
{
    int year , money ;//  定义·相关变量
    double rate , sum , x ;
    printf("Enter money:");
    scanf("%d",&money);    //  & 符号很容易漏
    printf("Enter year:");
    scanf("%d",&year);
    printf("Enter rate:");
    scanf("%lf",&rate);   //  double 型变量对应 lf
    x = pow(1+rate,year);   //pow(x,y)表示x的y次方
    sum = money*x;
    printf("sum = %.2f",sum);
    return 0 ;
}
