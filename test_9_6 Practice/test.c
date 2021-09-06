#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//36.健康评估
//int main()
//{
//    double weight = 0;
//    double high = 0.0;
//    double BMI = 0.0;
//    scanf("%lf %lf", &weight, &high);
//    BMI = weight / (high * high );
//    if (BMI >= 18.5 && BMI <= 23.9)
//        printf("Normal\n");
//    else
//        printf("Abnormal\n");
//    return 0;
//}

//40.竞选社长
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int count_a = 0;
//    int count_b = 0;
//    int i = 0;
//    for (i = 0; i < (sizeof(arr) - 1); i++)
//    {
//        if (arr[i] == 'A')
//            count_a++;
//        if (arr[i] == 'B')
//            count_b++;
//    }
//    if (count_a > count_b)
//        printf("A\n");
//    else if (count_a < count_b)
//        printf("B\n");
//    else
//        printf("E\n");
//    return 0;
//}

//41.你是天才吗？
//int main()
//{
//    int IQ = 0;
//    while (~scanf("%d", &IQ));
//    {
//        if (IQ >= 140)
//            printf("Genius\n");
//    }
//    return 0;
//}

//42.完美成绩
//int main()
//{
//    int score = 0;
//    while (~scanf("%d", &score));
//    {
//        if (score >= 90 && score <= 100)
//            printf("Perfect\n");
//    }
//    return 0;
//}

//43.及格分数
//int main()
//{
//    int score = 0;
//    while (~scanf("%d", &score))
//    {
//        if (score >= 60)
//            printf("Pass\n");
//        else
//            printf("Fail\n");
//    }
//    return 0;
//}

//44.判断整数奇偶性
//int main()
//{
//    int num = 0;
//    while (~scanf("%d", &num))
//    {
//        if (num % 2 == 1)
//            printf("Odd\n");
//        else
//            printf("Even\n");
//    }
//    return 0;
//}

//45.最高分数
//int main()
//{
//    int chi = 0;
//    int math = 0;
//    int eng = 0;
//    while (~scanf("%d %d %d", &chi, &math, &eng))
//    {
//        int max = chi > math ? chi : math;
//        max = max > eng ? max : eng;
//        printf("%d\n", max);
//    }
//    return 0;
//}

//46.判断是元音还是辅音
//#include <string.h>
//int main()
//{
//    int ch = 0;
//    char vowel[] = "AaEeIiOoUu";
//    while ((ch = getchar()) != EOF)
//    //在%c的前面加上空格，会消除掉前面所有的空白字符，然后读取一个字符
//    //在%c的后面加上\n，也可以消除
//    //while (~scanf(" %c", &ch))
//    {
//        //strchr - 判断一个字符串里是否存在某个字符
//        if (strchr(vowel, ch))
//            printf("Vowel\n");
//        else
//            printf("Consonant\n");
//        getchar();
//    }
//    return 0;
//}

//47.判断是不是字母
//#include <ctype.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (isalpha(ch))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//    }
//    return 0;
//}

//48.字母大小写转换
//#include <ctype.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c\n", &ch))
//    {
//        if (islower(ch))
//        {
//            printf("%c\n", toupper(ch));
//        }
//        if (isupper(ch))
//        {
//            printf("%c\n", tolower(ch));
//        }
//    }
//    return 0;
//}

//50.计算单位阶跃函数
//int main()
//{
//    int t = 0;
//    while (~scanf("%d\n", &t))
//    {
//        if (t > 0)
//            printf("1\n");
//        else if (t < 0)
//            printf("0\n");
//        else
//            printf("0.5\n");
//    }
//    return 0;
//}

//51.三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (~scanf("%d %d %d\n", &a, &b, &c))
//    {
//        if ((a + b > c) && (a + c > b) && (b + c > a))
//        {
//            if ((a == b) && (b == c))
//                printf("Equilateral triangle!\n");
//            else if ((a == b && b != c) || (a == c) && (c != b) || (b == c) && (c != a))
//                printf("Isosceles triangle!\n");
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
//    return 0;
//}

//52.衡量人体胖瘦程度
//int main()
//{
//    int weight = 0;
//    int high = 0;
//    double BMI = 0;
//    while (~scanf("%d%d\n", &weight, &high))
//    {
//        BMI = weight / ((high / 100.0) * (high / 100.0));
//        if (BMI < 18.5)
//            printf("Underweight\n");
//        else if (BMI >= 18.5 && BMI <= 23.9)
//            printf("Normal\n");
//        else if (BMI > 23.9 && BMI <= 27.9)
//            printf("Overweight\n");
//        else if (BMI > 27.9)
//            printf("Obese\n");
//    }
//    return 0;
//}

//53.计算一元二次方程
//#include <math.h>
//int main()
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    while (~scanf("%lf %lf %lf", &a, &b, &c))
//    {
//        if (a == 0)
//            printf("Not quadratic equation\n");
//        else
//        {
//            double disc = b * b - 4 * a * c;
//            if (disc == 0.0)
//                printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//            else if (disc > 0.0)
//            {
//                printf("x1=%.2lf;x2=%.2lf\n",
//                    (-b - sqrt(disc)) / (2 * a),
//                    (-b + sqrt(disc)) / (2 * a));
//            }
//            else if (disc < 0.0)
//            {
//                double real = (-b) / (2 * a);
//                double image = sqrt(-disc) / (2 * a);
//                printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n",
//                    real, image, real, image);
//            }
//        }
//    }
//    return 0;
//}

//54.获得月份天数
//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (~scanf("%d %d", &y, &m))
//    {
//        int day = days[m - 1];
//        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//            if (m == 2)
//                day += 1;
//        printf("%d\n", day);
//    }
//    return 0;
//}

//55.简单计算器
//int main()
//{
//    double n1 = 0;
//    double n2 = 0;
//    char  op = 0;
//    while (~scanf("%lf%c%lf", &n1, &op, &n2))
//    {
//        switch (op)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//            break;
//        case '/':
//            if (n2 == 0.0)
//                printf("Wrong!Division by zero!\n");
//            else
//                printf("%.4lf/%.4lf=%.4lf\n", n1, n2, n1 / n2);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//        }
//    }
//    return 0;
//}

//57.正方形图案
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
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//58.直角三角形图案
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
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}