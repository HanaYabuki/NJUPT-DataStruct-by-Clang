#pragma once

#include "GlobalSettings.h"

// 队列
typedef struct queue {
	// 队列头坐标
	int front;
	// 队列尾坐标
	int rear;
	// 队列最大长度
	int maxSize;
	// 数据域
	ElemType *element;
}Queue;

// 初始化队列
Status Queue_Create(Queue *Q, int mSize);
// 销毁队列
Status Queue_Destroy(Queue *Q);
// 判空
BOOL Queue_IsEmpty(Queue *Q);
// 判满
BOOL Queue_IsFull(Queue *Q);
// 取队列头值
Status Queue_Front(Queue *Q, ElemType *x);
// 入队
Status Queue_Push(Queue *Q, ElemType x);
// 出队
Status Queue_Pop(Queue *Q);
// 清理队列内容，不销毁队列 
Status Queue_Clear(Queue *Q);