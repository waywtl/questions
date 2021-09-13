#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//87.统计成绩
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    float score = 0.0;
//    float sum = 0.0;
//    float max = 0.0;
//    float min = 100.0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%f", &score);
//        sum += score;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%.2f %.2f %.2f\n", max, min, sum / n);
//    return 0;
//}

//90.矩阵计算
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int num = 0;
//    int sum = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &num);
//            if (num > 0)
//                sum += num;
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}

//92.逆序输出
//int main()
//{
//    int arr[10] = { 0 };
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//96.有序序列判断
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int num = 0;
//    int max = 0;
//    int min = 100;
//    int count1 = 0;
//    int count2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        if (num >= max)
//        {
//            max = num;
//            count1++;
//        }
//        if (num < min)
//        {
//            min = num;
//            count2++;
//        }
//    }
//    if (count1 == n || count2 == n)
//        printf("sorted\n");
//    else
//        printf("unsorted\n");
//    return 0;
//}

//98.序列中删除指定数字
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[50] = { 0 };
//    int del = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d ", &arr[i]);
//    }
//    scanf("%d", &del);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//        {
//            arr[j++] = arr[i];
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//99.序列中整数去重
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                int k = 0;
//                for (k = j; k < n - 1; k++)
//                {
//                    arr[k] = arr[k + 1];
//                }
//                n--;
//                j--;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//100.有序序列合并
int main()
{
    int n = 0;
    int m = 0;
    scanf("%d %d", &n, &m);
    int arr1[100] = { 0 };
    int arr2[100] = { 0 };
    int arr3[200] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            arr3[k++] = arr2[j];
        }
    }
    else
    {
        for (; i < n; i++)
        {
            arr3[k++] = arr1[i];
        }
    }
    for (i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
    return 0;
}