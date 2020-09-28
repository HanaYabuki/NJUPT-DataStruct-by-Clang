#pragma once

#include "GlobalSettings.h"

// ջ
typedef struct stack {
	// ջ������
	int top;
	// ջ������
	int maxSize;
	// ������
	ElemType *element;
}Stack;

// ��ʼ��ջ
Status Stack_Create(Stack *S, int mSize);
// ����ջ
Status Stack_Destroy(Stack *S);
// �п�
BOOL Stack_isEmpty(Stack *S);
// ����
BOOL Stack_isFull(Stack *S);
// ȡջͷֵ
Status Stack_Top(Stack *S, ElemType *x);
// ��ջ
Status Stack_Push(Stack *S, ElemType x);
// ��ջ
Status Stack_Pop(Stack *S);
// ����ջ���ݣ�������ջ
Status Stack_Clear(Stack *s);