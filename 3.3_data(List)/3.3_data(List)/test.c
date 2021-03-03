//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

int main(void)
{
	SListNode * pHead = NULL;//链表头指针
	SListPushBack(&pHead, 1);
	SListPushBack(&pHead, 2);
	SListPushFront(&pHead, 2);
	SListPushFront(&pHead, 3);
	//SListPopBack(&pHead);
	//SListPopFront(&pHead);
	//SListFind(pHead,5);
	//SListDelete(&pHead, 2);
	SListInsert(&pHead, 9, 0);
	SListPrint(pHead);
	return 0;
}