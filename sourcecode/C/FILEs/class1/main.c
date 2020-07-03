#include <stdio.h>

int main()
{
    //1. 要起一个名字在程序中表示文件
    //文件指针表示，FILE *名字
    FILE * TEXT = NULL;
    //2. 把名字分配给相应的文件
    //fopen("路径", "读写方式")
    //一个错误: 

    TEXT = fopen("testfile.txt", "r");
    //防御性措施

    if(TEXT == NULL)
    {
        TEXT = fopen("testfile.txt", "w+");
    }

    fclose(TEXT);

    return 0;
}