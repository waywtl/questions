#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//59.��תֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//60.���ո�ֱ��������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i + j < n - 1)
//                    printf("  ");
//                else
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//62.��ת������ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//63.����ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i + 1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//64.K��ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= n - i; j++)
//            {
//                printf("* ");
//            }
//            for (j = 0; j < i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j <= i + 1; j++)
//            {
//                printf("* ");
//            }
//            for (j = 0; j <= n - i; j++)
//            {
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//65.����ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n - i; j++)
//                printf("  ");
//            for (j = 0; j <= i; j++)
//                printf("*");
//            printf("\n");
//        }
//        for (i = 0; i < n + 1; i++)
//        {
//            int j = 0;
//            for (j = 0; j < i; j++)
//                printf("  ");
//            for (j = 0; j <= n - i; j++)
//                printf("*");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//66.��б����ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//67.��б����ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i + j == n - 1)
//                    printf("*");
//                printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//68.X��ͼ��
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//69.����������
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)
//                    printf("* ");
//                else if (j == 0 || j == n - 1)
//                    printf("* ");
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//70.����������ͼ��
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < n; j++)
            {
                if (i == j || i == n - 1 || j == 0)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}