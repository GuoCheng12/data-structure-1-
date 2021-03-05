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
//����ĳ�����ӻ�ɾ��
void ListInsert(ListNode* pos, ElementType x);//����ListFind����pos
void ListDelete(ListNode* pos, ElementType x);//����ListFind����pos
void ListDestory(ListNode** phead);//�ͷ�
void ListClear(ListNode* phead);//�������
