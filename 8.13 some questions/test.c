#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.任给三个数，从大到小排序
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	int sum4 = 0;
//	int sum5 = 0;
//	int sum6 = 0;
//	int sum7 = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	while (a > b)
//	{
//		if (b > c)
//		{
//			break;
//		}
//		else
//		{
//			if (a > c)
//			{
//				sum1 = b;
//				b = c;
//				c = sum1;
//				break;
//			}
//			else
//			{
//				sum2 = b;
//				sum3 = a;
//				a = c;
//				b = sum3;
//				c = sum2;
//				break;
//			}
//		}
//	}
//	while (a < b)
//	{
//		if (a > c)
//		{
//			sum4 = a;
//			a = b;
//			b = sum4;
//			break;
//		}
//		else
//		{
//			if (b > c)
//			{
//				sum5 = a;
//				sum6 = c;
//				a = b;
//				b = sum6;
//				c = sum5;
//				break;
//			}
//			else
//			{
//				sum7 = a;
//				a = c;
//				c = sum7;
//				break;
//			}
//		}
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//2.打印3和3的倍数

//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 3; i <= n; i++)
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	return 0;
//}
 
//3.给定两个数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//  int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m > n)
//	{
//		r = m % n;
//		if (r == 0)
//		{
//			printf("%d\n", n);
//			break;
//		}
//		else
//		{
//			m = n;
//			n = r;
//		}
//	}
//	return 0;
//}

//4.打印1000年到2000年之间的闰年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1. 能被4整除并且不能被100整除
//		//2. 能被400整除
//		//if (year % 4 == 0 && year % 100 != 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//5.打印100-200之间的素数

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		判断i是否为素数
//		素数判断的规则
//		1.试除法
//		产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

#include<math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
