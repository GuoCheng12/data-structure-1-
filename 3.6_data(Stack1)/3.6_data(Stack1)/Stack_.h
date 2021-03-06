#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
typedef int ElementType;


typedef struct Stack
{
	ElementType* _a;//前_：表示成员
	int _top; //栈顶下标
	int _capacity;

}Stack;

void StackInit(Stack* pst);
void StackDestory(Stack* pst);
void StackPush(Stack* pst, ElementType x);
void StackPop(Stack* pst);
int StackSize(Stack* pst);
//返回1是空，返回0是非空
int StackEmpty(Stack* pst);
ElementType StackTop(Stack* pst);//返回栈顶的下标