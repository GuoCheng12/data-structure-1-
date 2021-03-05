//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

void TestList1()
{
	ListNode* phead = NULL;
	ListInit(&phead);

	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);
	//ListPopBack(phead);
	ListPushFront(phead, 9);
	ListPopFront(phead);
	ListPrint(phead);
}
void TestList2()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushBack(phead, 1);
	ListPushBack(phead, 2);
	ListPushBack(phead, 3);
	ListPushBack(phead, 4);

	ListNode* pos = ListFind(phead, 3);
	ListInsert(pos, 30);
	ListPrint(phead);
}
int main(void)
{
	TestList2();
	return 0;
}