#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//7.���̶�����
//int main()
//{
//    printf("%#o %#X\n", 1234, 1234);
//    return 0;
//}

//19.�������һ����λ��
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

//28.��Сдת��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", ch + 32);
//		getchar();//��ȡ \n
//	}
//
//	return 0;
//}

//8.ʮ������תʮ����
//int main()
//{
//	printf("%15d\n", 0xABCDEF);
//	return 0;
//}

//9.printf�ķ���ֵ
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}

//11.ѧ��������Ϣ�������
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

//35.�ж���ĸ
#include <ctype.h>

//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		//�жϲ����
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

//12.�ַ�������
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

//13.ASCII��
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

//14.���������������
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//	printf("year=%4d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	return 0;
//}

//29.2��n�η�����
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
//	//�������� - ����
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}

//15.���ո�ʽ���벢�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("a=%d,b=%d", &a, &b);
//	printf("a=%d,b=%d", b, a);
//	return 0;
//}

//16.�ַ�תASCII��
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n", ch);
//	return 0;
//}

//17.������ʽ��ֵ
//int main()
//{
//    int a = 40;
//    int c = 212;
//    printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//    return 0;
//}

//18.����������
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d %d", a / b, a % b);
//    return 0;
//}