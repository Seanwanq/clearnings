#include <stdio.h>
#include <string.h>


int main()
{
    FILE *write = fopen("string.file", "w+");
    char str[] = "I love you. ";
    fputs(str, write);
    fclose(write);

    FILE *read = fopen("string.file", "r");
    char buff[1024] = "";
    fgets(buff, 1024, read);
    puts(buff);
    fclose(read);

    return 0;
}