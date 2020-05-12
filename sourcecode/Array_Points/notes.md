# 指向字符串的指针

* 将指针指向字符串
  * 可以指向常量字符串
  * 也可以指向存储字符串的字符数组


    `Input: `
    ```C
    char * words = "My heart is still. ";
    words += 9;
    puts(words);
    ```
    |M|y| |h|e|a|r|t| |i|s| |s|t|i|l|l|.|\0|
    |-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|
    ^\
    |\
    words

    |i|s| |s|t|i|l|l|.|\0|
    |-|-|-|-|-|-|-|-|-|-|
    ^\
    |
    words

    `Output: `


