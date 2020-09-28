#pragma once

#include "GlobalSettings.h"

// 栈
typedef struct stack {
	// 栈顶坐标
	int top;
	// 栈最大深度
	int maxSize;
	// 数据域
	ElemType *element;
}Stack;

// 初始化栈
Status Stack_Create(Stack *S, int mSize);
// 销毁栈
Status Stack_Destroy(Stack *S);
// 判空
BOOL Stack_isEmpty(Stack *S);
// 判满
BOOL Stack_isFull(Stack *S);
// 取栈头值
Status Stack_Top(Stack *S, ElemType *x);
// 入栈
Status Stack_Push(Stack *S, ElemType x);
// 出栈
Status Stack_Pop(Stack *S);
// 清理栈内容，不销毁栈
Status Stack_Clear(Stack *s);