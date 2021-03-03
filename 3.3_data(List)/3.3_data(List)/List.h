#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef int Position;
typedef struct SListNode //链表创建
{
	ElementType Element;
	struct SListNode * next;
}SListNode;

//声明接口
//增删需要传二级指针
void SListPushBack(SListNode** phead, ElementType x);//尾增
void SListPopBack(SListNode** phead);//尾删

void SListPushFront(SListNode** phead, ElementType x);//头增
void SListPopFront(SListNode** phead);//头删

SListNode* SListFind(SListNode* phead, ElementType x);//查找元素
void SListDelete(SListNode** phead, ElementType x);//删除某个元素
void SListInsert(SListNode** phead, ElementType x,Position place);//增加某个元素
void SListPrint(SListNode* phead);//打印链表