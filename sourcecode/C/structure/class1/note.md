# 结构体

## 概述

将不同类型的数组合成一个整体，以便于引用。

## 结构体

一种构造类型数据，由若干不同类型的数据项组成，构成结构体的各个数据项称为结构体成员。

```c
struct 结构体类型名		//struct为关键字
{
    数据类型1 成员名1;	   //结构体类型名是用户定义的类型标识
    数据类型2 成员名2;
    ...
    数据类型n 成员名n;
};						//{}中是组成该结构体的成员.成员的数据类型可以是C语言所允许的任何数据类型
```

例1:

```C
/*学生类型的定义*/
struct student
{
    char num[8];
    char name[30];
    char gender;
    int age;
    char addr[60];
    int score[6];
};
```

例2: 

```c
/*图书类型的定义*/
struct bookcard
{
    char num[10];
    char name[30];
    char author[30];
    char pubisher[60];
    float price;
    int n;
};
```

`可以用这个定义了的结构体定义变量`

## 结构体变量

### 结构体类型变量的定义

利用已定义的结构体类型名定义变量

```c
struct 结构体名 变量名表;
```

例:

```c
struct bookcard book1[100];
struct student s[30], t1, t2;
```

结构体变量的各个成员在内存中占用连续存储区域, 结构体变量所占内存大小为结构体中每个成员所占用内存的长度之和

`struct student`


## 结构体类型与变量的说明

* 类型与变量是不同的概念
  * 应先定义一个结构体类型, 而后再定义结构体变量
  * 系统对类型不分配空间, 仅对变量分配空间
  * 只能对变量赋值、存取或运算, 而不能对一个类型赋、存取或运算

* 成员也可以是结构体变量

* 对结构体中的成员, 可以单独使用, 它的作用与低纬相当于普通变量

* 成员名可与程序中的变量名相同时, 也可与不同结构体类型的成员名相同, 二者代表不同的对象

例: 

```c
struct date
{
    int year, month, day;
};
struct student
{
    char num[8];
    char name[30];
    char gender;
    struct date birthday;
    char addr[60];
    int score[6];
};
```

| 变量名 |   大小   |
| :----: | :------: |
|  num   | 8个字节  |
|  name  | 30个字节 |
| gender | 1个字节  |
|  age   | 4个字节  |
|  addr  | 4个字节  |
| score  | 12个字节 |

## 结构体类型变量

* 在定义结构体类型的同时定义变量

```c
struct 结构体名
{
	成员定义表;
}变量名表;
```

例:

```c
struct student
{
    char num[8], name[20], gender;
    int age;
    float score;
}s1, st[30];
```

* 直接定义结构体

```c
struct
{
    成员定义表;
}变量名表;
```

例:

```c
struct
{
    char num[8], name[20], gender;
    int age;
    float score;
}st[30], a, b, c;
```

* 结构体变量的初始化

例:

```c
struct date
{
    int year, month, day;
};
struct student
{
    char num[8], name[20], gender;
    struct date birthday;
    float score;
}a = {"9606011", "Li ming", 'M', {1977, 12, 9}, 83},
 b = {"9608025", "Zhang liming", 'F', {1978, 5, 10}, 87},
 c;
```

> 如果初值个数少于结构体成员个数, 则将无初值对应的成员赋以0值
>
> 如果初值个数多于结构体成员个数, 则编译出错

例:

```c
struct s
{
    char num[8], name[20], gender;
    float score;
}stu[3] = 
{
    {"9606011", "Li ming", 'M', 87.5},
    {"9606012", "Zhang jiangguo", 'M', 79},
    {"9606013", "Wang ping", 'F', 90}
};
```

元素的个数可以省略, 根据赋初值时结构体常量的个数确定数组元素的个数

### 结构体变量的运算

* 用sizeof运算符计算结构体变量所占内存空间

```c
struct date
{
    int year, month, day;
};
struct student
{
    char num[8], name[20], gender;
    struct date birthday;
    float score;
}a;
```

> sizeof(a)的结果为8+20+1+12+4=45
>
> sizeof(struct student)的结果为45

* 同类型结构体变量之间的赋值运算

```c
struct date
{
    int year, month, day;
};
struct student
{
    char num[8], name[20], gender;
    struct date birthday;
    float score;
}a = {"9606011", "Li ming", 'M', {1977, 12, 9}, 83}, b, c;
c = a;
```

结构体变量之间进行赋值时, 系统将按成员一一对应赋值

* 结构体变量的运算

  * 对结构体变量进行取址运算

  ```c
  struct student
  {
      ...
  }a;
  ```

  对结构体变量a进行&a运算, 可以得到a的首地址, 它是结构体类型指针

* 结构体变量成员的引用

  * 一般形式: 结构体变量名.成员名

    > "."分量运算符, 左结合, 最高优先级

    ```c
    struct student
    {
        ...
    }a;
    ```
    > 结构体变量a的各个成员可分别表示为a.num, a.name, a.gender, a.birthday, a.score

    > 也可以有a.birthday.year, a.birthday.month, a.birthday.day

    例:

    ```c
    /*编写一个统计选票的程序*/
    struct candidate
    {
        char name[20];		//name为候选人姓名
        int count;			//count为候选人得票数
    }list[] = {
        {"invalid", 0},		//无效票, 个数 0
        {"Zhao", 0},		//1
        {"Qian", 0},		//2
        {"Sun", 0},			//3
        {"Li", 0},			//4
        {"Zhou", 0}			//5
    };
    ```

    > 例: 给Sun投了一票, 定位: list[3].count

    ```c
    int main()
    {
        int i, n;
        printf("Enter vote\n");
        scanf("%d", &n);
        while(n != -1)
        {
            if(n >= 1 && n <= 5)
            {
                list[n].count ++;
            }
            else
            {
                printf("invalid\n");
                list[0].count++;
            }
            scanf("%d", &n);
        }
        for(i = 0; i <= 5; i++)
        {
            printf("%s:%d", list[i].name, list[i].count);
            printf("%s:%d", list[0].name, list[0].count);
        }
        return 0;
    }
    ```

* 结构体指针

  * 结构体指针变量定义的一般形式:

  ```c
  struct 结构体名 *指针变量名;
  ```

  例:

  ```c
  struct student *p;		//占用4个字节
  ```

  ```c
  struct date
  {
      int year, month, day;
  }*q;
  ```

  * 结构体成员的三种引用形式

  ```c
  struct date
  {
      int year, month, day;
  }d, *p = &d;
  ```

  > 用结构体指针变量的引用形式:
  
  ```C
  (*p).year	(*p).month	(*p).day
  p->year		p->month	p->day
  ```
  > 以下方式是不对的
  >
  > ```c
  > X p=&d.year
  > X *p.year
  > ```
  
  例:
  
  ```c
  int main()
  {
      struct date
      {
          int year, month, day;
      }today, *p = &today;
      printf("Enter today's date(YYYY/MM/DD): ");
      scanf("%d%d%d", &today.year, &today.month, &today.day);
      printf("Today:%d%d%d\n", p->year, p->month, p->day);
      return 0;
  }
  ```
  
  * 指向结构体数组的指针
  
  ```c
  /*利用结构体指针输出一组化学元素名称及其原子量*/
  struct list
  {
      int i;
      char name[4];
      float w;
  }tab[4] = {
      {1, "H", 1.008},
      {2, "He", 4.0026},
      {3, "Li", 6.941}.
      {4, "Be", 7.01218}
  };
  
  int main()
  {
      struct list *p;
      printf("No\tName\tAtomic Weight\n");
      for(p = tab; p < tab + 4; p++)
      {
          printf("%d\t%s\t%f\n", p->i, p->name, p->w);
      }
  }
  ```
  
  
  
  例:
  
  ```c
  /*分析自增自减运算对程序结果的影响*/
  struct code
  {
      int i;
      char ch;
  }a[] = {
      {100, 'A'},
      {200, 'B'},
      {300, 'C'},
      {400, 'D'}
  };
  
  int main()
  {
      struct code *p = a;
      printf("%d\t", ++p->i);		//101
      printf("%c\t", (++p)->ch);	//B
      printf("%d\t", (p++)->i);	//200
      printf("%c\t", ++p->ch);	//D
      printf("%d\t", p->i++);		//300
      printf("%d\n", p->i);		//301
      return 0;
  }
  ```
  
  | a数组 |      |      |
  | ----- | ---- | ---- |
  | 100   | a[0] | 101  |
  | 'A'   | -->  | 'A'  |
  | 200   | a[1] | 200  |
  | 'B'   | -->  | 'B'  |
  | 300   | a[2] | 301  |
  | 'C'   | -->  | 'D'  |
  | 400   | a[3] | 400  |
  | 'D'   | -->  | 'D'  |
  
  