//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

ListNode* BuyListNode(ElementType x)//创建节点 
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->next = NULL;
	newNode->prev = NULL;
	newNode->data = x;

	return newNode;
}

void ListInit(ListNode** pphead)//初始化
{
	*pphead = BuyListNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

ListNode* ListFind(ListNode* phead, ElementType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
			return cur;
		else
			cur = cur->next;
	}
	return NULL;
}

void ListPushBack(ListNode* phead, ElementType x)//尾插
{
	assert(phead);

	ListNode* tail = phead->prev;
	ListNode* newNode = BuyListNode(x);

	tail->next = newNode;
	newNode->prev = tail;

	newNode->next = phead;
	phead->prev = newNode;
}
void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
}

void ListPopBack(ListNode* phead)//尾删
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* tail = phead->prev;

	phead->prev = tail->prev;
	tail->prev->next = phead;

	free(tail);
	tail = NULL;
}
 
void ListPushFront(ListNode* phead,ElementType x)//头插
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* newNode = BuyListNode(x);
	ListNode* first = phead->next;

	newNode->next = first;
	first->prev = newNode;
	newNode->prev = phead;
	phead->next = newNode;
}

void ListPopFront(ListNode* phead)//头删
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* first = phead->next;
	ListNode* second = first->next;

	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}
void ListInsert(ListNode* pos, ElementType x)
{
	assert(pos);

	ListNode* posPrev = pos->prev;
	ListNode* newNode = BuyListNode(x);

	posPrev->next = newNode;
	newNode->next = pos;
	newNode->prev = posPrev;
	pos->prev = newNode;
}
void ListDelete(ListNode* pos, ElementType x)
{
	assert(pos);
	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;


	posPrev->next = posNext;
	posNext->prev = posPrev;
	free(pos);
	pos = NULL;
}

void ListClear(ListNode* phead)
{
	assert(phead);

	ListNode* cur = phead;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
}
void ListDestory(ListNode** pphead)
{
	assert(*pphead);

	ListClear(*pphead);
	free(*pphead);
	*pphead = NULL;
}
