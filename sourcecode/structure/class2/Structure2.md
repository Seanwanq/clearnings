# 结构体

## 函数间结构体数据的传递

### 方法一： 在函数之间**直接传递结构体数据**

例：编制一个复数乘法函数，采用值传递的方法传送数据。

```c
struct complex		//定义存放复数的结构体类型
{
    float re;		//re成员用于存放复数的实部
    float im;		//im成员用于存放复数的虚部
};
```

```c
struct complex multiplier(struct xomplex cx, struct complex cy)
{
    struct complex cz;
    cz.re=xc.re*cy.re-cx.im*cy.im;
    cz.im=cx.re*cy.im+cx.im*cy.re;
    return (cz);
}
int main()
{
    struct complex x, y, z;
    x.re = 3.2;
    x.im = 1.5;
    y.re = 2.7;
    y.im = 4.6;
    z = multiplier(x, y);		//实参是结构体变量
    printf("%f+%f\n", z.re, z.im);		//以复数形式输出
}
```

> 形参是结构体变量。调用此函数时系统将分别位形参cx和cy各分配一个sizeof(struct complex)大小的内存空间

### 方法二：在函数之间**传递结构体指针**。

例：编制一个复数乘法函数，采用传递指针的方法达到传递数据的目的

```c
struct complex
{
    float re, im;
};
void multiplier(struct complex *px, struct complex *py, struct complex *pz)
{
    pz -> re = px -> re * py -> re - px -> im * py -> im;
    pz -> im = px -> re * py -> im + px -> im * py -> re;
}
int main()
{
    struct complex x, y, z;
    x.re = 3.2;
    x.im = 1.5;
    y.re = 2.7;
    y.im = 4.6;
    multiplier(&x, &y, &z);		//实参是结构体变量的地址
    printf("(%f+%fi) * (%f + &fi) = %f + %fi\n", x.re, x.im, y.re, y.im, z.re, z.im);
    return 0;
}
```

### 方法三：利用**全局结构体变量**传递结构体数据

例：编制一个复数乘法函数，采用全局变量的方法达到传送数据的目的

```c
struct complex x, y, z;
void multiplier()
{
    z.re = x.re * y.re - x.im * y.im;
    z.im = x.re * y.im + x.im * y.re;
}
int main()
{
    x.re = 3.2;
    x.im = 1.5;
    y.re = 2.7;
    y.im = 4.6;
    multiplier();
    printf("%f + %fi\n", z.re, z.im);
}
```

## 结构体的应用——链表

### 链表的概念

是程序设计中一种重要的动态数据结构，它是**动态**的进行存储分配的一种结构

#### 其动态性体现为：

* 链表中的元素个数可以根据需要**添加或减少**，不像数组，在定义之后就固定不变
* 元素的位置可以**变化**，即可以从某个位置删除，然后再插入到一个新的位置

### 链表的基本结构

| head | 1000 | 1032 | 3284 | 1296 | 1382 | 2008 |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 1000 |      | C    | H    | A    | I    | N    |
|      | 1032 | 2384 | 1296 | 1382 | 2008 | NULL |

头结点------------------------------------------------------------------尾结点

---|------------------------------------------------------------------------|------

1. 链表中每个元素称为一个结点
2. 构成链表的结点必须是结构体类型数据

```c
struct node
{
    char c;		//数据域
    struct node *next;		//指针域-->存放下一个节点的地址
};
```

3. 相邻结点的地址不一定是连续的，依靠指针将它们连接起来。

例：动态分配和释放存储单元

```c
#include <stdlib.h>
int main()
{
    struct st
    {
        int n;
        sturct st *next;
    } *p;
    p = (struct st *)malloc (sizeof(struct st));
    p -> n = 5;
    p -> next = NULL;
    printf("p->n = %d\tp->next = %x\n", p->n, p->next);
    free(p);
}
```

### 链表的基本操作

* 创建链表——从无到有建立一个链表。即往一个空链表中一次插入若干个结点，并保持结点之间的前驱和后继的关系

例：建立一个学生电话簿的单向链表函数

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define NEW (struct node *)malloc(sizeof(struct node))
struct node
{
    char name[20], tel[9];
	struct node *next;
};
struct node *create()
{
    static struct node *h;
    struct node *p, *q;
    char name[20];
    h = NULL;
    printf("name: ");
    gets(name);
    while(strlen(name)!=0)
    {
        p = NEW;
        if(p == NULL)
        {
            printf("Allocation failure\n");
            exit(0);
        }
        strcpy(p->name, mane);
        printf("tel: ");
        gets(p->tel);
        p->next=NULL;
        if(h==NULL)
        {
            h=p;
        }
        else
        {
            q->next=p;
        }
        q=p;
        printf("name: ");
        gets(name);
    }
    return h;
}
```



* 检索操作——检索操作是指按给定的检索条件，查找各结点，如果找到符合条件的结点，则称为检索成功；否则，检索失败

遍历检索单链表

例：输出学生电话簿链表函数

```c
#include <stdlib.h>
#include <string.h>
#define NEW (struct node *)malloc(sizeof (struct node))
struct node
{
    char name[20], tel[9];
    struct node *next;
};
void prlist(struct node *head)
{
    struct node *p;
    p = head;
  /*while(p != NULL)
    {
        printf("%s\t%s\n", p->name, p->tel);
        p=p->next;
    }*/
  /*while(p!=NULL)
	{
    	if(strcmp(p->name,str) == 0)
    	{
        	break;
    	}
    	else
    	{
        	p = p->next;
    	}
	}*/
    while(p!=NULL&&strcmp(p->name, str) != 0)
    {
        p=p->next;
    }
}


void main()
{
    struct node *head;
    ......
    head = create();
    prlist(head);
    ......
}
```



* 插入操作——在结点之间插入一个新的结点，使链表中的结点个数增1
* 删除操作——删除结点i，使链表中的结点个数减1

在链表中，如果要删除第i个结点：

1. 先找到第i个结点
2. 将（i-1）个结点直接与第（i+1）个结点相连接
3. 释放第i个结点的存储单元

例：删除学生电话簿链表中指定学生的信息

1. 删除第一个结点

> `head=p->next;`

2. 删除中间结点或尾结点

> `q->next=q->next`

```c
#include <stdlib.h>
#include <string.h>
#define NEW (struct node *)malloc(sizeof(struct node))
struct node
{
    char name[20];
    char tel[9];
    struct node *next;
};
struct node *delnode(struct node *head, char *x)
{
    struct node *p, *q;
    static struct node *h;
    if(head == NULL)
    {
        printf("This is am empty list.");
        return head;
    }
    p = head;
    while(strcmp(x, p->name)!=0 && p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    if(strcmp(x, p->name) == 0)
    {
        if(p == head)
        {
            head = p->next;
        }
        else
        {
            q->next = p-> next;
        }
        free(p);
    }
    else
    {
        printf("Not found.");
    }
    h = head;
    return h;
}
```



