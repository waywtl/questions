#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//101.班级成绩输入输出
//int main()
//{
//    int i = 0;
//    float score[5] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        float sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &score[j]);
//            sum += score[j];
//        }
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", score[j]);
//        }
//        printf("%.1f\n", sum);
//    }
//    return 0;
//}

//102.矩阵元素定位
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int row = 0;
//    int col = 0;
//    scanf("%d %d", &row, &col);
//    printf("%d\n", arr[row - 1][col - 1]);
//    return 0;
//}

//103.序列重组矩阵
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i <= n * m; i++)
//    {
//        scanf("%d", &tmp);
//        printf("%d ", tmp);
//        if (i % m == 0)
//            printf("\n");
//    }
//    return 0;
//}

//104.最高身高
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int row = 0;
//    int col = 0;
//    int max = 0;
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (arr[i][j] > max)
//            {
//                row = i;
//                col = j;
//                max = arr[i][j];
//            }
//        }
//    }
//    printf("%d %d\n", row + 1, col + 1);
//    return 0;
//}

//105.矩阵相等判断
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[10][10] = { 0 };
//    int arr2[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < m; j++)
//        {
//            if (arr1[i][j] != arr2[i][j])
//            {
//                printf("No\n");
//                break;
//            }
//        }
//        if (arr1[i][j] != arr2[i][j])
//        {
//            break;
//        }
//    }
//    if (i == n)
//        printf("Yes\n");
//    return 0;
//}

//106.上三角矩阵判断
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j)
//            {
//                if (arr[i][j] != 0)
//                {
//                    printf("NO\n");
//                    return 0;
//                }
//            }
//        }
//    }
//    printf("YES\n");
//    return 0;
//}

//107.矩阵逆置
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//108.矩阵交换
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    scanf("%d", &k);
//    char t = 0;
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < k; i++)
//    {
//        scanf(" %c %d %d", &t, &a, &b);
//        if (t == 'r')
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//        else if (t == 'c')
//        {
//            for (j = 0; j < n; j++)
//            {
//                int tmp = arr[j][a - 1];
//                arr[j][a - 1] = arr[j][b - 1];
//                arr[j][b - 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//109.杨辉三角
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[30][30] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (j == 0)
//                arr[i][j] = 1;
//            if (i == j)
//                arr[i][j] = 1;
//            if (i >= 2 && j >= 1)
//            {
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//110.井字棋
//int main()
//{
//    char arr[3][3] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 3; i++)
//    {
//        for (j = 0; j < 3; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//        }
//    }
//    char flag = 'O';
//    for (i = 0; i < 3; i++)
//    {
//        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][1] != 'O')
//        {
//            flag = arr[i][1];
//            break;
//        }
//        if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[1][i] != 'O')
//        {
//            flag = arr[1][i];
//            break;
//        }
//    }
//    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[1][1] != 'O')
//    {
//        flag = arr[1][1];
//    }
//    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] != 'O')
//    {
//        flag = arr[1][1];
//    }
//    if (flag == 'K')
//        printf("KiKi wins!\n");
//    else if (flag == 'B')
//        printf("BoBo wins!\n");
//    else
//        printf("No winner!\n");
//    return 0;
//}