#pragma once
typedef int ElementType;
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	ElementType data;
}ListNode;


ListNode* BuyListNode(ElementType x);
ListNode* ListFind(ListNode* phead, ElementType x);

void ListPushBack(ListNode* phead, ElementType x);
void ListPrint(ListNode* phead);
void ListInit(ListNode** pphead);
void ListPopBack(ListNode* phead);
void ListPushFront(ListNode* phead, ElementType x);
void ListPopFront(ListNode* phead);
//查找某处增加或删除
void ListInsert(ListNode* pos, ElementType x);//运用ListFind查找pos
void ListDelete(ListNode* pos, ElementType x);//运用ListFind查找pos
void ListDestory(ListNode** phead);//释放
void ListClear(ListNode* phead);//清空链表
