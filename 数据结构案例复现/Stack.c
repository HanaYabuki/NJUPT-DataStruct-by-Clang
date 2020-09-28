#include "Stack.h"

Status Stack_Create(Stack * S, int mSize)
{
	S->maxSize = mSize;
	S->element = (ElemType*)malloc(sizeof(ElemType)*mSize);
	S->top = -1;
	return OK;
}

Status Stack_Destroy(Stack * S)
{
	S->maxSize = 0;
	free(S->element);
	S->top = -1;
}

BOOL Stack_isEmpty(Stack * S)
{
	return S->top==-1;
}

BOOL Stack_isFull(Stack * S)
{
	return S->top==S->maxSize-1;
}

Status Stack_Top(Stack * S, ElemType * x)
{
	if (Stack_isEmpty(S)) {
		return Underflow;
	}
	*x = S->element[S->top];
	return OK;
}

Status Stack_Push(Stack * S, ElemType x)
{
	if (Stack_isFull(S)) {
		return Overflow;
	}
	S->top++;
	S->element[S->top] = x;
	return OK;
}

Status Stack_Pop(Stack *S) {
	if (Stack_isEmpty(S)) {
		return ERROR;
	}
	S->top--;
	return OK;
}

Status Stack_Clear(Stack *S){
	S->top = -1;
}

