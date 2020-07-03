/*
    命令行结合文件操作写的案例
    简单实现dos中copy指令
    命令行参数: 主函数的参数
    文件操作: 以字符的方式读写
*/


#include <stdio.h>
#include <string.h>


int main(int argv, char *argc[])        //命令行程序
{
    if (argv != 3)      //记录命令行字符串个数
    {
        printf("use myCopy file1 file2");
    }
    else
    {
        //printf("argc[0] = %s\n", argc[0]);      //存放文件目录
        //printf("argc[1] = %s\n", argc[1]);      //存放第二个指令
        //printf("argc[2] = %s\n", argc[2]);      //存放第三个指令
        printf("覆盖 argc[2] 吗? (Yes/No/All): ");

    }
    
    return 0;
}