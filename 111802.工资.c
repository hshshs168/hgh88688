#include<stdio.h>
int main()
{
printf("请输入您的工资:");
 int n;
scanf("%d",&n);
if(n<0)
{
    printf("您还有花呗未还，暂不配使用该程序\n");
}
else if(0<=n&&500>=n)
{
    printf("赤贫");
}
else if(501<=n&&1500>=n)
{
    printf("贫困");
}
else if(1501<=n&&3000>=n)
{
    printf("普通打工人");
}
else if(3001<=n&&5000>=n)
{
    printf("普通清洁工");
}
else if(5001<=n&&12000>=n)
{
    printf("水电工工资");
    }
else if(12001<=n&&50000>=n)
{
    printf("脑袋大脖子粗不是老板就是伙夫");
}
else if(50001<=n&&200000000>=n)
{
    printf("程序员");
}
else
{
    printf("该程序配不上您");
}
}
