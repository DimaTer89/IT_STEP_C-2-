#include <iostream>
#include <time.h>
#define N 10
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arr[N];
	int *ptr;
	ptr = arr;
	for (int i = 0; i < N; i++, ptr++)
	{
		*ptr = rand() % 11 ;
		cout << " " << *ptr << "  ";
	}
	cout << endl;
	ptr = &arr[1];
	int *minPtr = arr;
	for (int i = 1; i < N; i++, ptr++)
	{
		if (*minPtr > *ptr)minPtr = ptr;
	}
	cout <<" Минимальный элемент массива :"<< *minPtr << endl;
	bool flag = false;
	ptr = arr + N - 1;
	int *negPtr;
	for (int i = 0; i < N; i++, ptr--)
	{
		if (*ptr < 0) {
			negPtr = ptr;
			flag = true;
			break;
		}
	}
	ptr = arr;
	int tmp;
	if (flag == true) {
		cout << " Последний отрицательный элемент массива :" << *negPtr << endl;
		tmp = *negPtr;
		*negPtr = *minPtr;
		*minPtr = tmp;
	}
	if (flag == false) {
		cout << "Массиве нет отрицательных элементов !\n";
		tmp = *minPtr;
		*minPtr = *ptr;
		*ptr = tmp;
	}
	ptr = arr;
	for (int i = 0; i < N; i++, ptr++)
	{
		cout << " " << *ptr << "  ";
	}
	cout << endl;
	system("pause");
}
