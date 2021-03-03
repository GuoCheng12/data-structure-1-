#pragma once
#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
typedef int Position;
typedef struct SListNode //������
{
	ElementType Element;
	struct SListNode * next;
}SListNode;

//�����ӿ�
//��ɾ��Ҫ������ָ��
void SListPushBack(SListNode** phead, ElementType x);//β��
void SListPopBack(SListNode** phead);//βɾ

void SListPushFront(SListNode** phead, ElementType x);//ͷ��
void SListPopFront(SListNode** phead);//ͷɾ

SListNode* SListFind(SListNode* phead, ElementType x);//����Ԫ��
void SListDelete(SListNode** phead, ElementType x);//ɾ��ĳ��Ԫ��
void SListInsert(SListNode** phead, ElementType x,Position place);//����ĳ��Ԫ��
void SListPrint(SListNode* phead);//��ӡ����