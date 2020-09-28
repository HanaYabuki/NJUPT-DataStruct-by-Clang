#include "PythonlikeIO.h"

#include "List.h"
#include "Stack.h"
#include "Queue.h"

void Test_List(void) {
	SingleList list;
	Node *pNode;
	List_Init(&list);
	int i;
	ElemType tmp;
	
	print_string("��������ʮ����");
	for (i = 0; i < 10; ++i) {
		List_Insert(&list, i - 1, i * 2 + 1);
	}
	
	print_string("��ʼ����");
	pNode = list.first;
	while (pNode) {
		print("-> ", pNode->element);
		pNode = pNode->link;
	}

	print_string("�����±�Ϊ5Ԫ�ص�ֵ");
	List_Find(&list, 5, &tmp);
	print("Ԫ��Ϊ ->", tmp);
	
	print_string("ɾ���±�Ϊ5��Ԫ��");
	List_Delete(&list, 5);

	print_string("�ڶ��α���");
	pNode = list.first;
	while (pNode) {
		print("-> ", pNode->element);
		pNode = pNode->link;
	}
	
	print_string("�����±�Ϊ5Ԫ�ص�ֵ");
	List_Find(&list, 5, &tmp);
	print("Ԫ��Ϊ ->", tmp);

	if (List_Destroy(&list) == OK) {
		print_string("����ɹ�����");
	}
	else {
		print_string("�������ٳ���");
	}
	return;
}

int main(void) {
	return 0;
}