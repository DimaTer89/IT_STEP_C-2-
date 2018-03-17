#include <iostream>
#include <time.h>
#define ROW 4
#define COL 5
using namespace std;
void randArr(int *ptr, int size) {
	for (int i = 0; i < size; i++, ptr++) {
		*ptr = rand() % 51;
	}
}
void printArr(int *ptr, int size) {
	for (int i = 0; i < size; i++, ptr++) {
		cout << " " << *ptr;
	}
	cout << endl;
}
void tworandArr(int *a, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, a++) {
			*a = rand() % 101;
		}
	}
}
void twoprintArr(int *a, int n,int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++, a++) {
			printf(" %3d ", *a);
		}
		cout << endl;
	}
	cout << endl;
}
int sum(int a) {
	if (a < 10)return a;
	else return sum(a / 10) + a % 10;
}
int indexMax(int *ptr, int size) {
	int ind = 0;
	int max = sum(*ptr);
	for (int i = 0; i < size; i++, ptr++) {
		if (sum(*ptr) > max) {
			max = sum(*ptr);
			ind = i;
		}
	}
	return ind;
}
int indexMin(int *ptr, int size) {
	int ind = 0;
	int min = sum(*ptr);
	for (int i = 0; i < size; i++, ptr++) {
		if (sum(*ptr) < min) {
			min = sum(*ptr);
			ind = i;
		}
	}
	return ind;
}
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int const N = 10;
	int arr[N];
	int twoArr[ROW][COL];
	cout << " Массив \n";
	randArr(arr, N);
	printArr(arr, N);
	cout << " Индекс суммы максимального элемента = " << indexMax(arr,N) << endl;
	cout << " Индекс суммы минимального элемента = " << indexMin(arr, N) << endl;
	int min = indexMin(arr, N);
	int max = indexMax(arr, N);
	int *maxPtr= arr + max;
	int *minPtr = arr + min;
	int tmp = *maxPtr;
	*maxPtr = *minPtr;
	*minPtr = tmp;
	cout << " Новый массив \n";
	printArr(arr, N);
	cout << " Массив \n";
	tworandArr(twoArr[0], ROW, COL);
	twoprintArr(twoArr[0], ROW, COL);
	for (int i = 0; i < ROW; i++) {
		cout << " Индекс суммы максимального элемента = " << indexMax(twoArr[i], COL) << endl;
		cout << " Индекс суммы минимального элемента = " << indexMin(twoArr[i], COL) << endl;
	}
	for (int i = 0; i < ROW; i++) {
		int min = indexMin(twoArr[i], COL);
		int max = indexMax(twoArr[i], COL);
		int *maxPtr = twoArr[i] + max;
		int *minPtr = twoArr[i] + min;
		int tmp = *maxPtr;
		*maxPtr = *minPtr;
		*minPtr = tmp;
	}
	cout << " Новый массив \n";
	twoprintArr(twoArr[0], ROW, COL);
	system("pause");
}
