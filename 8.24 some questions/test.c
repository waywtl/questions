#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//1.
 
//int main()
//{
//	unsigned char a = 200;
//	//11001000
//	unsigned char b = 100;
//	//01100100
//	unsigned char c = 0;
//
//	c = a + b;
//	//00000000000000000000000011001000
//	//00000000000000000000000001100100
//	//00000000000000000000000100101100
//	//00101100 - c
//	printf("%d %d", a + b, c);//300 44
//	return 0;
//}

//2.打印杨辉三角

//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			//竖边的1
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			//斜边的1
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			//中间的数
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3.查找凶手

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}
// 
//典中典
//赛马问题：有36匹马，6个跑道，没有计时器，请赛马确定，36皮马中的前三名。
//问最少比赛几次？-----8次

//赛马问题：有25匹马，5个跑道，没有计时器，请赛马确定，25皮马中的前三名。
//问最少比赛几次？-----7次

//4.
//A说：B第二，我第三；
//B说：我第二，E第四；
//C说：我第一，D第二；
//D说：C最后，我第三；
//E说：我第四，A第一；
//每个人只说对了一半，请编程确定比赛名次

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if ((B==2) + (A==3) == 1 &&
//							(B==2) + (E==4) == 1 &&
//							(C==1) + (D==2) == 1 &&
//							(C==5) + (D==3) == 1 &&
//							(E==4) + (A==1) == 1)
//						{
//							if (A * B * C * D * E == 120)
//							{
//								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//5.旋转字符串

#include <string.h>
#include <assert.h>


//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.
//		*(arr + len - 1) = tmp;
//	}
//}

//三步翻转法
//abcdef
//bafedc
//cdefab

//void reserve(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reserve(arr,arr+k-1);//逆序左边
//	reserve(arr+k,arr+len-1);//逆序右边
//	reserve(arr,arr+len-1);//逆序整体
//}

//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat(str1, str1);//err
//	strncat(str1, str1, len1);
//	//int len = strlen(str1);
//	//int i = 0;
//	//for (i = 0; i < len; i++)
//	//{
//	//	str1[i + len] = str1[i];
//	//}
//	//2.判断str2指向的字符串是否是str1指向的字符串的字串
//	//strstr-找子串的
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}

//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}
//int main()
//{
//	int k = 0;
//	(void)scanf("%d", &k);
//	char arr[] = "abcdef";
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//6.杨氏矩阵找数

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			//找到了
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}

int FindNum(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;

	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			//找到了
			*px = x;
			*py = y;
			return 1;
		}
	}
	//找不到
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了,下标是:>%d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}