#include<stdio.h>//工资的输入与输出//
void main()
{
int n;
printf("请输入您的工资:");
scanf("%d",&n);
if(n>=0&&n<=100)
{
printf("贫困打工人");
}
else if(n>=101&&n<=1000)
{
printf("一般打工人");
}
else if(n>=1001&&n<=20000)
{
printf("土豪打工人");
}
else
{
printf("您的输入有误，请重新输入");
}
}
