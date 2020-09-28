#include "List.h"

Status List_Init(SingleList * L)
{
	L->first = NULL;
	L->n = 0;
	return OK;
}

Status List_Find(SingleList * L, int i, ElemType * x)
{
	Node* p;
	int j;
	if (i<0 || i>L->n - 1) {
		return ERROR;
	}
	p = L->first;
	for (j = 0; j < i; ++j) {
		p = p->link;
	}
	*x = p->element;
	return OK;
}

Status List_Insert(SingleList * L, int i, ElemType x)
{
	Node *p, *q;
	int j;
	if (i<-1 || i>L->n - 1) {
		return ERROR;
	}
	p = L->first;
	for (j = 0; j < i; ++j) {
		p = p->link;
	}
	q = (Node*)malloc(sizeof(Node));
	q->element = x;
	if (i > -1) {
		q->link = p->link;
		p->link = q;
	}
	else {
		q->link = L->first;
		L->first = q;
	}
	L->n++;
	return OK;
}

Status List_Delete(SingleList * L, int i)
{
	int j;
	Node *p, *q;
	if (!L->n || i<0 || i>L->n-1) {
		return ERROR;
	}
	p = q = L->first;
	for (j = 0; j < i - 1; ++j) {
		q = q->link;
	}
	if (i == 0) {
		L->first = L->first->link;
	}
	else {
		p = q->link;
		q->link = p->link;
	}
	free(p);
	L->n--;
	return OK;
}

Status List_Destroy(SingleList * L)
{
	Node *p;
	while (L->first) {
		p = L->first->link;
		free(L->first);
		L->first = p;
	}
	return OK;
}
