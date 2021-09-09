#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//75.数字三角形
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i; j++)
//            {
//                printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//76.去掉最高与最低求平均值
//int main()
//{
//    int score = 0;
//    int i = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &score);
//        sum += score;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//    printf("%.2f\n", (sum - max - min) / 5.0);
//    return 0;
//}

//77.有序序列插入一个数
//int main()
//{
//    int n = 0;
//    int arr[51] = { 0 };
//    int m = 0;
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    scanf("%d", &m);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > m)
//            arr[i + 1] = arr[i];
//        else
//        {
//            arr[i + 1] = m;
//            break;
//        }
//    }
//    if (i < 0)
//        arr[0] = m;
//    for (i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//78.筛选法求素数
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int arr[101] = { 0 };
//        int i = 0;
//        for (i = 2; i <= n; i++)
//            arr[i] = i;
//        int j = 0;
//        for (j = 2; j <= n; j++)
//        {
//            int k = 0;
//            for (k = j + 1; k <= n; k++)
//            {
//                if (arr[k] % j == 0)
//                    arr[k] = 0;
//            }
//        }
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//                printf("%d ", arr[i]);
//            else
//                count++;
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}

//试除法求素数
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 2; j < i; j++)
//			{
//				if (i % j == 0)
//				{
//					count++;
//					break;
//				}
//			}
//			if (j == i)
//				printf("%d ", j);
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}

//79.图像相似度
//int main()
//{
//    int m = 0;
//    int n = 0;
//    int arr1[100][100] = { 0 };
//    int arr2[100][100] = { 0 };
//    int count = 0;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (arr1[i][j] == arr2[i][j])
//            {
//                count++;
//            }
//        }
//    }
//    printf("%.2f\n", 100.0 * count / (m * n));
//    return 0;
//}

//85.包含数字9的数
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int m = i;
//        while (m)
//        {
//            if (m % 10 == 9)
//            {
//                count++;
//                break;
//            }
//            m /= 10;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}