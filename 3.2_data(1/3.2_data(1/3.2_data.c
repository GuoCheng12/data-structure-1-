//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int MaxSubsequenceSum(const int A[], int sz)//时间复杂度0(N^3)
//{
//	int ThisSum, MaxSum, i, j, k;
//
//	MaxSum = 0;
//	for (i = 0; i < sz; i++)
//		for (j = i; j < sz; j++)
//		{
//			ThisSum = 0;
//			for (k = i; k <= j; k++)
//				ThisSum += A[k];
//
//			if (ThisSum >MaxSum)
//				MaxSum = ThisSum;
//		}
//	return MaxSum;
//}
int Max3(int x, int y, int z)
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y>x && y>z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
static int 
MaxSubSum(const int A[], int left, int right)//时间复杂度 O(N*logN)
{
	int MaxLeftSum, MaxRightSum;
	int MaxLeftBorderSum, MaxRightBorderSum;
	int LeftBorderSum, RightBorderSum;
	int Center, i;

	if (left == right)
	{
		if (A[left] >= 0)
			return A[left];
		else
			return 0;
	}

	Center = (left + right) / 2;
	MaxLeftSum = MaxSubSum(A, left, Center);
	MaxRightSum = MaxSubSum(A, Center + 1, right);

	MaxLeftBorderSum = 0; LeftBorderSum = 0;
	for (i = Center; i >= left; i--)
	{
		LeftBorderSum += A[i];
		if (LeftBorderSum > MaxLeftBorderSum)
			MaxLeftBorderSum = LeftBorderSum;
	}
	MaxRightBorderSum = 0; RightBorderSum = 0;
	for (i = Center + 1; i <= right; i++)
	{
		RightBorderSum += A[i];
		if (RightBorderSum > MaxRightBorderSum)
			MaxRightBorderSum = RightBorderSum;
	}
	return Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
}
int 
MaxSubsequencerSum2(const int A[], int N)
{
	int ThisSum, MaxSum, j;

	ThisSum = MaxSum = 0;
	for (j = 0; j < N; j++)
	{
		ThisSum += A[j];
		if (ThisSum>MaxSum)
			MaxSum = ThisSum;
		else if (ThisSum < 0)
			return 0;
	}
	return MaxSum;
}


int main(void)
{
	int Array[] = { 4, -3, 5, -2, -1, 2, 6, -2 };
	int sz = sizeof(Array) / sizeof(Array[0]);
	//int ret = MaxSubsequenceSum(Array, sz);
	int ret2 = MaxSubSum(Array, 0, sz-1);
	int ret3 = MaxSubsequencerSum2(Array, sz);
	printf("%d", ret3);
	return 0;
}