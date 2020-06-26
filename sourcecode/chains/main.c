#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char data[50];              //数据域
    struct Node * next;         //指针域
};

struct Node * chain(int n);
//创建结点
struct Node * createNode(char * data);
//打印全部链表
void printList (struct Node * headNode);
//删除节点, 首地址, 删除的位数
struct Node * delNode(struct Node * headNode, int n);
//插入结点，参数：插入那个链表，插入结点的数据是多少
//链表首地址, 插入数据位数, 数据
struct Node * insertNodeByHead(struct Node * headNode, int n, char * data);

int main()
{
    char data[50] = "e";
    struct Node * headNode = chain(3);
    headNode = insertNodeByHead(headNode, 1, data);
    headNode = delNode(headNode, 3);
    printList(headNode);
    return 0;
}

struct Node * chain(int n)
{
    if (n <= 0)
    {
        printf ("create fail.\n");
        return NULL;
    }
    struct Node * headNode = NULL;
    int i;
    char data[50];
    struct Node *p = NULL, *q = NULL;
    for (i = 0; i < n; i++)
    {
        scanf ("%s", data);
        if (strlen (data) != 0)
        {
            p = createNode(data);
            if (i == 1)
            {
                headNode->next = p;
            }
            else if (i > 1)
            {
                q->next = p;
            }
            if (headNode == NULL)
            {
                headNode = p;
                q = p;
            }
            else if (headNode != NULL)
            {
                q = p;
            }
        }
    }
    q->next = NULL;


    return headNode;
}

//创建节点
struct Node * createNode(char * data)
{
    struct Node * newNode = (struct Node *)malloc(sizeof (struct Node));
    strcpy (newNode -> data, data);
    newNode -> next = NULL;
    return newNode;
}

//打印全部链表
void printList (struct Node * headNode)
{
    struct Node * pMove = headNode;
    while (pMove)
    {
        printf ("%s", pMove -> data);
        pMove = pMove -> next;
    }
    printf ("\n");
}

//插入结点，参数：插入那个链表，插入结点的数据是多少
//链表首地址, 插入数据位数, 数据
struct Node * insertNodeByHead(struct Node * headNode, int n, char * data)
{
    struct Node *p, *q, *r;
    int i;
    if (n <= 0)
    {
        printf ("insert fail.\n");
        return NULL;
    }
    else if (n == 1)
    {
        p = createNode(data);
        p->next = headNode;
        headNode = p;
        return headNode;
    }
    else if (n > 1)
    {
        p = headNode;
        for (i = 0; i < n - 1; i++)
        {
            r = p;
            p = p->next;
        }
        r->next = createNode(data);
        r->next->next = p;
        return headNode;
    }
}

//删除节点, 首地址, 删除的位数
struct Node * delNode(struct Node * headNode, int n)
{
    struct Node *p, *q;
    int i;
    if (n <= 0)
    {
        printf ("delet fail.\n");
        return NULL;
    }
    else if (n == 1)
    {
        headNode = headNode->next;
        return headNode;
    }
    else if (n > 1)
    {
        p = headNode;
        for (i = 0; i < n - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        return headNode;
    }
}