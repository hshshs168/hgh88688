#include<stdio.h>
#include<windows.h>
int main()
{
	int n=1;
	do{
		Sleep(1000);
		printf("现在是%d秒\n",n++);
	}
while(n<=1000000);
	}
