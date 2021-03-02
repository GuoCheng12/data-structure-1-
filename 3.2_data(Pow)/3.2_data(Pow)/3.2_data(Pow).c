//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//幂运算 时间复杂度O(logN)

int IsEven(int N)
{
	if (N % 2)
		return 0;
	else
		return 1;
}
long int
Pow(long int X, unsigned int N)
{
	if (N == 0)
		return 1;
	if (N == 1)
		return N;
	if (IsEven(N))
	{
		return Pow(X*X, N / 2);
	}
	else
	{
		return Pow(X*X, N / 2)*X;
	}
}
int main(void)
{
	long int ret = Pow(2, 62);
	printf("%ld", ret);
	return 0;
}