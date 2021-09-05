#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void move(char pos1, char pos2)
{
	printf(" %c->%c ", pos1, pos2);
}

//n:�������ӵĸ���
//pos1:��ʼλ��
//pos2:��תλ��
//pos3:Ŀ��λ��

void Hanoi(int n, char pos1, char pos2, char pos3)
{
	if (n == 1)
	{
		move(pos1, pos3);
	}
	else
	{
		Hanoi(n - 1, pos1, pos3, pos2);
		move(pos1, pos3);
		Hanoi(n - 1, pos2, pos1, pos3);
	}
}

int main()
{
	Hanoi(64, 'A', 'B', 'C');
	return 0;
}

//һ����һ�׻�����
//int Frog(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	return Frog(n - 1) + Frog(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ways = Frog(n);
//	printf("%d", ways);
//	return 0;
//}

//һ����һ�ס����׻�����
//int Frog(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	if (n == 3)
//	{
//		return 4;
//	}
//	return Frog(n - 1) + Frog(n - 2) + Frog(n - 3);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ways = Frog(n);
//	printf("%d", ways);
//	return 0;
//}

//һ�ο��Ե�1��k��
//#include <math.h>
//int Frog(int n,int k)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	if (n == 2)
//	{
//		return 2;
//	}
//	//......
//	//......
//	if (n == k)
//	{
//		return (int)pow((int)2, (int)(k - 1));
//	}
//	return Frog(n - 1) + Frog(n - 2) + ...... + Frog(n - k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n,&k);
//	int ways = Frog(n,k);
//	printf("%d", ways);
//	return 0;
//}