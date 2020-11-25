#include<stdio.h>
int main()
{
int k=8,n;
printf("猜数字游戏开始了，请输入0-20\n");
scanf("%d",&n);
if(n==k)
{
printf("恭喜小主猜对了");
}
else if(n>k)
{
printf("对不起，你猜的有点大");
}
else
printf("对不起，你猜的有点小");

}
