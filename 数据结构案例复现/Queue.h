#pragma once

#include "GlobalSettings.h"

// ����
typedef struct queue {
	// ����ͷ����
	int front;
	// ����β����
	int rear;
	// ������󳤶�
	int maxSize;
	// ������
	ElemType *element;
}Queue;

// ��ʼ������
Status Queue_Create(Queue *Q, int mSize);
// ���ٶ���
Status Queue_Destroy(Queue *Q);
// �п�
BOOL Queue_IsEmpty(Queue *Q);
// ����
BOOL Queue_IsFull(Queue *Q);
// ȡ����ͷֵ
Status Queue_Front(Queue *Q, ElemType *x);
// ���
Status Queue_Push(Queue *Q, ElemType x);
// ����
Status Queue_Pop(Queue *Q);
// ����������ݣ������ٶ��� 
Status Queue_Clear(Queue *Q);