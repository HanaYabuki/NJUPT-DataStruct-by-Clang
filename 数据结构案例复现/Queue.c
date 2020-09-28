#include "Queue.h"

Status Queue_Create(Queue * Q, int mSize)
{
	Q->maxSize = mSize;
	Q->element = (ElemType*)malloc(sizeof(ElemType)*mSize);
	Q->front = Q->rear = 0;
	return OK;
}

Status Queue_Destroy(Queue * Q)
{
	Q->maxSize = 0;
	free(Q->element);
	return OK;
}

BOOL Queue_IsEmpty(Queue * Q)
{
	return Q->front==Q->rear;
}

BOOL Queue_IsFull(Queue * Q)
{
	return (Q->rear+1)%Q->maxSize==Q->front;
}

Status Queue_Front(Queue * Q, ElemType * x)
{
	if (Queue_IsEmpty(Q)) { 
		return ERROR; 
	}
	*x = Q->element[(Q->front + 1) % Q->maxSize];
	return OK;
}

Status Queue_Push(Queue * Q, ElemType x)
{
	if (Queue_IsFull(Q)) {
		return Overflow;
	}
	Q->rear = (Q->rear + 1) % Q->maxSize;
	Q->element[Q->rear] = x;
	return OK;
}

Status Queue_Pop(Queue * Q)
{
	if (Queue_IsEmpty(Q)) {
		return Underflow;
	}
	Q->front = (Q->front + 1) % Q->maxSize;
	return OK;
}

Status Queue_Clear(Queue * Q)
{
	Q->front = Q->rear = 0;
	return OK;
}

