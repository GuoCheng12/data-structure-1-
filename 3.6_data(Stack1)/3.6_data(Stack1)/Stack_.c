//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack_.h"
void StackInit(Stack* pst)// 初始化栈
{
	assert(pst);

	pst->_a = malloc(sizeof(ElementType)*4);
	pst->_top = 0;
	pst->_capacity = 4;
}
void StackDestroy(Stack* pst)
{
	assert(pst);
	free(pst->_a);
	pst->_a = NULL;
	pst->_top = pst->_capacity = 0;
}

void StackPush(Stack* pst, ElementType x)
{
	assert(pst);

	if (pst->_top == pst->_capacity)
	{
		pst->_capacity *= 2;
		ElementType* tmp = (ElementType*)realloc(pst->_a, sizeof(ElementType)*pst->_capacity);
		if (tmp == NULL)
		{
			printf("Wrong!");
			exit(-1);
		}
		else
		{
			pst->_a = tmp;
		}
	}
	pst->_a[pst->_top] = x;
	pst->_top++;
}
void StackPop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	--pst->_top;
}

int StackSize(Stack* pst)
{
	assert(pst);
	return pst->_top;
}
int StackEmpty(Stack* pst)
{
	assert(pst);

	return pst->_top == 0 ? 1 : 0;
}
ElementType StackTop(Stack* pst)
{
	assert(pst);
	assert(pst->_top > 0);
	return pst->_a[pst->_top - 1];
}