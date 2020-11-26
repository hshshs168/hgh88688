#include<stdio.h>
int main()
{
int n;
int a=0;
while(n<1023)
{
    n=2*a+1;
    printf("%d\n",n);
    a++;
}
}
