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
	
	print_string("连续插入十个数");
	for (i = 0; i < 10; ++i) {
		List_Insert(&list, i - 1, i * 2 + 1);
	}
	
	print_string("开始遍历");
	pNode = list.first;
	while (pNode) {
		print("-> ", pNode->element);
		pNode = pNode->link;
	}

	print_string("查找下标为5元素的值");
	List_Find(&list, 5, &tmp);
	print("元素为 ->", tmp);
	
	print_string("删除下标为5的元素");
	List_Delete(&list, 5);

	print_string("第二次遍历");
	pNode = list.first;
	while (pNode) {
		print("-> ", pNode->element);
		pNode = pNode->link;
	}
	
	print_string("查找下标为5元素的值");
	List_Find(&list, 5, &tmp);
	print("元素为 ->", tmp);

	if (List_Destroy(&list) == OK) {
		print_string("链表成功销毁");
	}
	else {
		print_string("链表销毁出错");
	}
	return;
}

int main(void) {
	return 0;
}