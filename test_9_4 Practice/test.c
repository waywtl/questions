#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7.缩短二进制
//int main()
//{
//    printf("%#o %#X\n", 1234, 1234);
//    return 0;
//}

//19.反向输出一个四位数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//28.大小写转换
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//读取 \n
//	}
//
//	return 0;
//}

//8.十六进制转十进制
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//9.printf的返回值
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}

//11.学生基本信息输入输出
//int main()
//{
//    int id = 0;
//    float c_score = 0.0;
//    double math_score = 0.0;
//    double eng_score = 0.0;
//    scanf("%d;%f,%lf,%lf", &id, &c_score, &math_score, &eng_score);
//    printf("The each subject score of  No. %d is %.2f, %.2lf, %.2lf.",
//        id, c_score, math_score, eng_score);
//
//    return 0;
//}

//35.判断字母
#include <ctype.h>

//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		//判断并输出
//		if (isalpha(ch))
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//12.字符金字塔
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c ", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//13.ASCII码
//int main()
//{
//	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116 , 33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//14.出生日期输入输出
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	return 0;
//}

//29.2的n次方计算
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", (int)pow((int)2, (int)n));
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//多组输入 - 整型
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}

//15.按照格式输入并交换输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}

//16.字符转ASCII码
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n", ch);
//	return 0;
//}

//17.计算表达式的值
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//18.计算带余除法
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}