/**
 * 计算牌面点数的程序
 * create by wuyexiong from HeadFirst C
 *
 * 编译执行命令
 * gcc cards.c -o cards && ./cards
 *
 * =====这里没有蠢问题=====
 * Q:为什么在Linux和Mac中运行程序必须在程序前加上./??
 * A:因为在Unix操作系统中，运行程序必须指定程序所在的目录，除非程序的目录已经列在PATH环境变量中
 * =====这里没有蠢问题=====
 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char card_name[3];
    puts("输入牌名: ");
    scanf("%2s", card_name);
    int val = 0;
    if(card_name[0] == 'K')
    {
        val = 10;
    }else if(card_name[0] == 'Q')
    {
        val = 10;
    }else if(card_name[0] == 'J')
    {
        val = 10;
    }else if(card_name[0] == 'A')
    {
        val = 11;
    }else
    {
        val = atoi(card_name);
    }
    printf("这张牌的点数是: %i\n", val);
    return 0;
}
