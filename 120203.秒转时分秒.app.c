#include<stdio.h>
int main()
{
int a,b,c,d;
printf("请输入你所需要转化的秒数:\n");
scanf("%d",&a);
b=a/3600;
c=(a-b*3600)/60;
d=a-b*3600-c*60;
printf("%2.2d:%2.2d:%2.2d",b,c,d);
return 0;
}
