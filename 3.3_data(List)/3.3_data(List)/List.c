//今儿又是活力满满的一天呢~
#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"
SListNode* BuySListNode(ElementType x)//动态开辟节点
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->Element = x;
	newNode->next = NULL;

	return newNode;
}

void SListPrint(SListNode* phead)//打印链表
{
	SListNode* cur = phead;
	while (cur)
	{
		printf("%d->", cur->Element);
		cur = cur->next;
	}
	printf("NULL\n");
}

void SListPushBack(SListNode** pphead, ElementType x)//尾增
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode; 
	}
	else
	{
	SListNode* cur = *pphead;
	while (cur->next)
	{
		cur = cur->next;
	}
	//此时cur为尾 开始插入数据
	cur->next = newNode;
	} 
}
void SListPopBack(SListNode** pphead)//尾删
{
	if (*pphead == NULL)//空链表
	{
		return;
	}
	else if ((*pphead)->next == NULL)//只有一个节点的链表
	{
		free(*pphead);
		*pphead = NULL;
	}
	else//两个链表及以上
	{
		SListNode* cur = *pphead;
		SListNode* prev = NULL;
		while (cur->next)
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		prev->next = NULL;
	}
}
void SListPushFront(SListNode** pphead, ElementType x)//头增
{
		SListNode* newNode = BuySListNode(x);
		newNode->next = *pphead;
		*pphead = newNode;//置为新的头
}
void SListPopFront(SListNode** pphead)//头删
{
	if (*pphead == NULL)//空链表时
	{
		return;
	}
	else//只有一个链表和多个链表的情况一样
	{
		SListNode* next = (*pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}
SListNode* SListFind(SListNode* phead,ElementType x)
{
	SListNode* cur = phead;
	if (phead == NULL)
	{
		return;
	}
	else
	{
	while (cur->next != NULL && cur->Element != x)
	{
		cur = cur->next;
	}
	if (cur->Element == x)
		printf("YES\n");
	else
		printf("Can't FIND IT\n");
	return cur;
	}
}
void SListDelete(SListNode** pphead, ElementType x)//删除某个数据
{
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* cur = *pphead;
		SListNode* prev = NULL;//设置一个指向cur前一个节点的指针
		while (cur->next != NULL && cur->Element != x)//判断条件，看是否找到，或者到尾了
		{
			prev = cur;//始终指向cur上一个位置
			cur = cur->next;
		}
		if (cur->Element == x)
		{
			prev->next = cur->next;
			free(cur);
		}
		else
		{
			return;
		}
	}
}
void SListInsert(SListNode** pphead, ElementType x,Position place)//插入某个节点在指定位置
{
	SListNode* cur = *pphead;
	if (*pphead == NULL)
	{
		return;
	}
	SListNode* newNode = BuySListNode(x);
	SListNode* prev = NULL;
	if (place == 0)//看是否为头插
	{
		newNode->next = *pphead;
		*pphead = newNode;
	}
	else//其他情况
	{
	while (place)
	{
		prev = cur;
		cur = cur->next;
		--place;
	}
	newNode->next = prev->next;
	prev->next = newNode;
	}
}
