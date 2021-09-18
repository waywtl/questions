#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//111.十进制输入，6进制输出
//int main()
//{
//    int n = 0;
//    int arr[40] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    while (n)
//    {
//        arr[i] = n % 6;
//        i++;
//        n /= 6;
//    }
//    for (i--; i >= 0; i--)
//    {
//        printf("%d", arr[i]);
//    }
//    return 0;
//}

//112.求和
//int main()
//{
//    long long n = 0;
//    scanf("%lld", &n);
//    long long sum = 0;
//    sum = (n + 1) * n / 2;
//    printf("%lld", sum);
//    return 0;
//}

//113.定闹钟
//int main()
//{
//    int h = 0;
//    int m = 0;
//    int k = 0;
//    scanf("%d:%d %d", &h, &m, &k);
//    h = ((m + k) / 60 + h) % 24;
//    m = (m + k) % 60;
//    printf("%02d:%02d", h, m);
//    return 0;
//}

//115.最大公约数与最小公倍数之和
//int main()
//{
//    long long n, m, max, min, c;
//    scanf("%lld %lld", &n, &m);
//    c = n * m;
//    while (m && n)
//    {
//        if (m > n)
//            m %= n;
//        else
//            n %= m;
//    }
//    max = m > n ? m : n;
//    printf("%lld\n", max + c / max);
//    return 0;
//}

//116.改数字
//#include <math.h>
//int main()
//{
//    int n = 0;
//    int sum = 0;
//    int i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        int m = n % 10;
//        if (m % 2 == 1)
//            m = 1;
//        else
//            m = 0;
//        sum += m * pow(10, i);
//        i++;
//        n /= 10;
//    }
//    printf("%d", sum);
//    return 0;
//}

//117.跳台阶
//int fib(int n)
//{
//    if (n == 1)
//        return 1;
//    if (n == 2)
//        return 2;
//    return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ways = fib(n);
//    printf("%d", ways);
//    return 0;
//}

//118.去重排序
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int num = 0;
//    int arr[100001] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &num);
//        arr[num] = num;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != 0)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//119.查找CHN的个数
//int main()
//{
//    char arr[8000] = { 0 };
//    scanf("%s", arr);
//    long long Count_C = 0;
//    long long Count_CH = 0;
//    long long Count_CHN = 0;
//    char* p = arr;
//    while (*p)
//    {
//        if (*p == 'C')
//            Count_C++;
//        else if (*p == 'H')
//            Count_CH += Count_C;
//        else if (*p == 'N')
//            Count_CHN += Count_CH;
//        p++;
//    }
//    printf("%lld", Count_CHN);
//    return 0;
//}
