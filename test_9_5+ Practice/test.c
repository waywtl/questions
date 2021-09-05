#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//25.计算体重指数
//int main()
//{
//	int weight = 0;
//	int high = 0;
//	double bmi = 0.0;
//	scanf("%d %d", &weight, &high);
//	bmi = weight / ((high / 100.0) * (high / 100.0));
//	printf("%.2lf\n", bmi);
//	return 0;
//}

//26.计算三角形的周长和面积
//#include <math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	double circumference = 0.0;
//	double area = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	circumference = a + b + c;
//	double p = circumference / 2;
//	area = sqrt(p * (p - a) * (p - b) * (p - c));
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//	return 0;
//}

//27.计算球体的体积
//int main()
//{
//	double r = 0.0;
//	double v = 0.0;
//	double pi = 3.1415926;
//	scanf("%lf", &r);
//	v = (4.0 / 3) * pi * r * r * r;
//	printf("%.3lf\n", v);
//	return 0;
//}

//10.成绩的输入输出
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//38.变种水仙花数
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100000; i++)
//    {
//        int tmp = i;
//        int sum = 0;
//        tmp = i;
//        sum = (tmp % 10) * (tmp / 10) + (tmp % 100) * (tmp / 100) +
//            (tmp % 1000) * (tmp / 1000) + (tmp % 10000) * (tmp / 10000);
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    for (i = 10000; i < 100000; i++)
//    {
//        int j = 0;
//        int sum = 0;
//        for (j = 10; j <= 10000; j *= 10)
//        {
//            sum += (i % j) * (i / j);
//        }
//        if (i == sum)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//20.kiki算数
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}

//21.浮点数的个位数字
//int main()
//{
//    double d = 0;
//    scanf("%lf", &d);
//    printf("%d", (int)d % 10);
//    return 0;
//}

//22.你能活多少秒
//int main()
//{
//    int age = 0;
//    scanf("%d", &age);
//    long long seconds = age * 3.156e7;
//    printf("%lld\n", seconds);
//    return 0;
//}

//23.时间转换
//int main()
//{
//    int seconds = 0;
//    scanf("%d", &seconds);
//    int a = seconds / 3600;
//    int b = (seconds % 3600) / 60;
//    int c = seconds % 60;
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}

//24.总成绩和平均分计算
//int main()
//{
//    double score[3] = { 0 };
//    scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
//    double sum = score[0] + score[1] + score[2];
//    double avg = sum / 3.0;
//    printf("%.2lf %.2lf", sum, avg);
//    return 0;
//}

//30.KiKi和酸奶
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    while (scanf("%d %d %d", &n, &h, &m) != EOF)
//    {
//        if (m % h == 0)
//            printf("%d\n", n - (m / h));
//        else
//            printf("%d\n", n - (m / h) - 1);
//    }
//    return 0;
//}

//34.进制A+B
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%x %o", &a, &b);
//    printf("%d\n", a + b);
//    return 0;
//}

//37.网购
//int main()
//{
//    double price = 0;
//    int month = 0;
//    int date = 0;
//    int flag = 0;
//    double cut = 1.0;
//    scanf("%lf %d %d %d", &price, &month, &date, &flag);
//    if (month == 11 && date == 11)
//    {
//        price *= 0.7;
//        if (flag == 1)
//            price -= 50;
//    }
//    else if (month == 12 && date == 12)
//    {
//        price *= 0.8;
//        if (flag == 1)
//            price -= 50;
//    }
//    if (price < 0.0)
//        printf("%.2lf", 0.0);
//    else
//        printf("%.2lf", price);
//    return 0;
//}

//39.争夺前五名
//int main()
//{
//    int n = 0;
//    int arr[40] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n - 1; i++)
//    {
//        int j = 0;
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
//    for (i = n - 1; i >= n - 5; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

int cmp(const void* e1, const void* e2)
{
    return *(int*)e1 - *(int*)e2;
}

int main()
{
    int n = 0;
    int arr[40] = { 0 };
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(arr[0]), cmp);
    for (i = n - 1; i >= n - 5; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}