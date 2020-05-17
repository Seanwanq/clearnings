#include <stdio.h>
#include <string.h>

int main()
{
    FILE *write = fopen("testfile.file", "w+");

    char str[] = "I love you. ";
    //所有的文件操作函数都包含了移动文件指针
    for(int i = 0; i < strlen(str) + 1; i++)
    {
        fputc(str[i], write);
    }

    fclose(write);

    //char buff[1024] = "";
    FILE *read = fopen("testfile.file", "r");
    int ch = fgetc(read);
    //文件常识：文件末尾的标记：EOF
    while(ch != EOF)
    {
        putchar(ch);
        ch = fgetc(read);
    }
    printf("\n");
    fclose(read);
    return 0;
}