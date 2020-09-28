#include "PythonlikeIO.h"

void print(char* info, ElemType e) {
	printf("%s%d\n", info, e);
}

void print_string(char* info) {
	printf("%s\n", info);
}

ElemType input(char* info) {
	printf("%s ", info);
	ElemType c;
	scanf_s("%d", &c);
	return c;
}

char* input(char* info) {
	printf("%s ", info);
	char str[64];
	scanf_s("%s", str);
	return str;
}