#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.创建一个整型数组，完成对数组的操作
//（1）实现函数init()初始化数组全为0
//（2）实现printf()打印数组的每个元素
//（3）实现reverse()函数完成数组元素的逆置

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
// }
//
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[sz - 1 - i];
//		arr[sz - 1 - i] = tmp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化为0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//2.将数组A中的内容和数组B中的内容进行交换。（数组一样大）

//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int A[] = {1,3,5,7,9 };
//	int B[] = {2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(A) / sizeof(A[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = A[i];
//		A[i] = B[i];
//		B[i] = tmp;
//	}
//	Print(A, sz);
//	Print(B, sz);
//	return 0;
//}

//3.下列代码输出结果是：
 
//int i;//全局变量-不初始化-默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001 - 原码
//	//11111111111111111111111111111110 - 反码
//	//11111111111111111111111111111111 - 补码
//	//
//	if (i > sizeof(i))//sizeof()-计算变量/类型所占空间的大小 >= 0 无符号数
//		              //i此时为-1，将一个有符号数与无符号数相比时，
//		              //先把有符号数转化为无符号数，再比较。
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}