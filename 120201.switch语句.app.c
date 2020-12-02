#include<stdio.h>
int main()
{
    int n;
    printf("请输入你的数字哦:\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("	麻省理工学院\n");break;
        case 2:printf("斯坦福大学\n");break;
        case 3:printf("哈佛大学\n");break;
        case 4:printf("牛津大学\n");break;
        case 5:printf("加州理工学院\n");break;
        case 6:printf("苏黎世联邦理工大学\n");break;
        case 7:printf("剑桥大学\n");break;
        case 8:printf("伦敦大学学院\n");break;
        case 9:printf("帝国理工学院\n");break;
        case 10:printf("芝加哥大学\n");break;
        case 11:printf("11 南洋理工大学\n");break;
        case 12:printf("11 新加坡国立大学\n");break;
        case 13:printf("13 普林斯顿大学（普林斯顿）\n");break;
        case 14:printf("14 康奈尔大学（伊萨卡）\n");break;
        case 15:printf("15 宾夕法尼亚大学（费城）\n");break;
        case 16:printf("16 清华大学\n");break;
        case 17:printf("17 耶鲁大学（纽黑文）\n");break;
        case 18:printf("18 哥伦比亚大学（纽约）\n");break;
        case 19:printf("18 洛桑联邦理工大学\n");break;
        case 20:printf("20 爱丁堡大学\n");break;
        default:printf("请输入一个1-20的数字");
    }
return 0;
}
