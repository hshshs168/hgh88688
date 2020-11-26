#include<stdio.h>
int main()
{
int a=0;
int n;
do
{
    n=2*a;
    printf("%d\n",n);
    a++;
}
while(n<1024);
}
