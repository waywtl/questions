#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.�θ����������Ӵ�С����
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
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

//2.��ӡ3��3�ı���

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
 
//3.���������������������������Լ��

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

//4.��ӡ1000�굽2000��֮�������

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1. �ܱ�4�������Ҳ��ܱ�100����
//		//2. �ܱ�400����
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

//5.��ӡ100-200֮�������

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		�ж�i�Ƿ�Ϊ����
//		�����жϵĹ���
//		1.�Գ���
//		����2->i-1
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
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
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
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
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
