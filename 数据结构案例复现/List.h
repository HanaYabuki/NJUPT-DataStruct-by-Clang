#pragma once

#include "GlobalSettings.h"

// ������ڵ�
typedef struct node {
	// �ڵ���������
	ElemType element;
	// ָ��
	struct node *link;
}Node;

// ������
typedef struct singleList {
	// ͷָ��
	Node *first;
	// �ڵ���Ŀ
	int n;
}SingleList;

// ��ʼ������
Status List_Init(SingleList *L);
// ���������ж�Ӧֵ
Status List_Find(SingleList *L, int i, ElemType *x);
// ������������
Status List_Insert(SingleList *L, int i, ElemType x);
// ��������ɾ��
Status List_Delete(SingleList *L, int i);
// ��������
Status List_Destroy(SingleList *L);