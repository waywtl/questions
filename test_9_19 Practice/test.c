#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//135.求质数个数
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 999; i++)
//    {
//        int tmp = i;
//        int j = 0;
//        for (j = 2; j < tmp; j++)
//        {
//            if (tmp % j == 0)
//                break;
//        }
//        if (j == tmp)
//            count++;
//    }
//    printf("%d", count);
//    return 0;
//}

//136.去重排序
//int main()
//{
//    int n = 0;
//    int arr[1000] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        if (arr[i] == arr[i + 1])
//        {
//            for (j = i; j < n - 1; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            n--;
//            i--;
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    int arr[1001] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    int m = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &m);
//        arr[m] = m;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//138.删除链表
struct Node
{
    int date;
    struct Node* next;
};

int main()
{
    struct Node* list = NULL;//指向链表第一个节点的
    struct Node* tail = NULL;//指向链表最后一个节点的
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int m = 0;
    int del = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
        pn->date = m;
        pn->next = NULL;
        if (list == NULL)
        {
            list = pn;
            tail = pn;
        }
        else
        {
            tail->next = pn;
            tail = pn;
        }
    }
    scanf("%d", &del);
    struct Node* cur = list;
    struct Node* prev = NULL;
    while (cur)
    {
        if (cur->date == del)
        {
            //删除
            struct Node* pd = cur;
            if (cur == list)//第一个结点
            {
                list = list->next;
                cur = list;
            }
            else//非第一个结点
            {
                prev->next = cur->next;
                cur = prev->next;
            }
            free(pd);
            n--;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
    //输出
    printf("%d\n", n);
    cur = list;
    while (cur)
    {
        printf("%d ", cur->date);
        cur = cur->next;
    }
    //释放链表
    cur = list;
    struct Node* dele = NULL;
    while (cur)
    {
        dele = cur;
        cur = cur->next;
        free(dele);
    }
    list = NULL;
    return 0;
}