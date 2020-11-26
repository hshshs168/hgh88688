#include<stdio.h>
int main()
{
int a,b,c,t;
printf("请输入3个数，空格隔开，回车结束\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{t=a;
a=b;
b=t;
}
if(a>c)
{t=a;
a=c;
c=t;
}
if(b>c)
{
t=b;
b=c;
c=t;
}
printf("%d\n%d\n%d\n",a,b,c);
}
