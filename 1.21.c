#define _CRT _SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//int main(void)
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{	
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int is_prime(int i)
//{
//	int j;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)//不是素数
//			return 0;
//	}
//	return 1;
//}
//
//int main(void)
//{
//	int i;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

int binary_search(int arr[], int k, int sz){
	int left = 0;
	int right = sz-1;
	
	while (left <= right){	
		int mid = left + (right - left) / 2;
		if (arr[mid] < k){
			left = mid + 1;
		}
		else if (arr[mid] > k){
			right = mid - 1;
		}
		else{
			return mid;
		}
	}
		return -1;
	return 0;
}
int main()
{
	//有序的
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1){
		printf("找不到\n");
	}
	else{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}