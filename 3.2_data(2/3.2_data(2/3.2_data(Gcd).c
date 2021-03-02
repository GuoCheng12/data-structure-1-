//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

unsigned int Gcd(unsigned M, unsigned N)//欧几里得算法 时间复杂度O(logN)
{
	unsigned int Rem;
	while (N>0)
	{
		Rem = M%N;
		M = N;
		N = Rem;
	}
	return M;
}

int main(void)
{
	int a = 50;
	int b = 15;
	unsigned int ret = Gcd(a, b);
	printf("%d ", ret);
	return 0;
}