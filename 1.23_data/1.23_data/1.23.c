//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <malloc.h>
//数据结构（1.时间复杂度，空间复杂度)

//二分查找的时间复杂度  O(log2^N）
//理解思路：有一个长度为N的数组，要查找X次(可以理解为一张纸，反复折叠)
// 即N = 2^x  解出x

//递归算法的时间复杂度计算 :
//long long Factorial(size_t N)
//{
//	return N < 2 ? N: Factorial(N - 1)*	N
//}
//计算递归算法的时间复杂度：递归次数*每次递归函数的次数


//计算利用递归算法的斐波那契数列的时间复杂度
long long fib(size_t N)
{
	return N < 2 ? N : fib(N - 1) + fib(N - 2);
}
//int main(void)
//{
//	long long  ret = fib(10);
//	printf("%d\n", ret);
//	return 0;
//}
//                    fib(n)           ---- 2^0
//               fib(n-1)  fib(n-2)      ---  2^1
//          fib(n-2) fib(n-3) fib(n-3)fib(n-4)  ----2^2
//............................................. -----2^(n-1)


//时间复杂度： 2^0+2^1+2^2+2^3.....+2^(n-1) = 2^n - 1;
// 所以时间复杂度 == O(2^n)

//改进，利用循环来写
long long* Fib(size_t N)
{
	long long* fibArray = malloc(sizeof(long long)*(N + 1));
	fibArray[0] = 0;
	if (N == 0)
	{
		return fibArray;
	}
	fibArray[1] = 1;
	for (int i = 2; i <= N; i++)
	{
		fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
	}
	return fibArray;
}
int main(void)
{
	printf("%d", Fib(50));
}
//使用循环的话，时间复杂度为 O(N)



//讲到空间复杂度
//空间复杂度不看空间占用，而看大概所创建多少个变量
//计算递归的空间复杂度
// 即递归次数*每次递归所创建的变量个数