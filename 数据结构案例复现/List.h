#pragma once

#include "GlobalSettings.h"

// 单链表节点
typedef struct node {
	// 节点数据内容
	ElemType element;
	// 指针
	struct node *link;
}Node;

// 单链表
typedef struct singleList {
	// 头指针
	Node *first;
	// 节点数目
	int n;
}SingleList;

// 初始化链表
Status List_Init(SingleList *L);
// 查找链表中对应值
Status List_Find(SingleList *L, int i, ElemType *x);
// 链表按索引插入
Status List_Insert(SingleList *L, int i, ElemType x);
// 链表按索引删除
Status List_Delete(SingleList *L, int i);
// 销毁链表
Status List_Destroy(SingleList *L);