#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int ElementType;


typedef struct Stack
{
	ElementType* _a;//ǰ_����ʾ��Ա
	int _top; //ջ���±�
	int _capacity;

}Stack;

void StackInit(Stack* pst);
void StackDestory(Stack* pst);
void StackPush(Stack* pst, ElementType x);
void StackPop(Stack* pst);
int StackSize(Stack* pst);
//����1�ǿգ�����0�Ƿǿ�
int StackEmpty(Stack* pst);
ElementType StackTop(Stack* pst);//����ջ�����±�