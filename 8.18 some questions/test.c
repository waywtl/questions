#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.����һ���������飬��ɶ�����Ĳ���
//��1��ʵ�ֺ���init()��ʼ������ȫΪ0
//��2��ʵ��printf()��ӡ�����ÿ��Ԫ��
//��3��ʵ��reverse()�����������Ԫ�ص�����

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
//	//Init(arr,sz);//�������ʼ��Ϊ0
//	Print(arr, sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//2.������A�е����ݺ�����B�е����ݽ��н�����������һ����

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

//3.���д����������ǣ�
 
//int i;//ȫ�ֱ���-����ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001 - ԭ��
//	//11111111111111111111111111111110 - ����
//	//11111111111111111111111111111111 - ����
//	//
//	if (i > sizeof(i))//sizeof()-�������/������ռ�ռ�Ĵ�С >= 0 �޷�����
//		              //i��ʱΪ-1����һ���з��������޷��������ʱ��
//		              //�Ȱ��з�����ת��Ϊ�޷��������ٱȽϡ�
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}