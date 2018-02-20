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
		*ptr = rand() % 21 - 10;
		cout << " " << *ptr << "  ";
	}
	cout << endl;
	ptr = arr;
	bool flag = false;
	int *xPtr = arr;
	int size = N;
	while (ptr < arr + size)
	{
		flag = false;
		if (*ptr < 0)
		{
			flag = true;
			xPtr = ptr;
			while (xPtr < arr + size)
			{
				*xPtr = *(xPtr + 1);
				xPtr++;
			}
			size--;
		}
		if (!flag)ptr++;
	}
	ptr = arr;
	while (ptr < arr + size)
	{
		cout << " " << *ptr << "  ";
		ptr++;
	}
	cout << endl;
	system("pause");
}
