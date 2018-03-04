#include <iostream>
using namespace std;
void  two() {
	printf(" два \n");
}
void one_three() {
	printf(" один\n");
	two();
	printf(" три \n");
}
void main() {
	setlocale(LC_ALL, "rus");
	printf(" начать сейчас :\n");
	one_three();
	printf(" порядок!\n");
	system("pause");
}
============================
