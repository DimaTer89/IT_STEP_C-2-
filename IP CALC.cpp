#include <iostream>
#include <math.h>
#include <time.h>
#define N 8
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int arr[N];
	int sum = 0;
	int *ptr = arr;
	printf(" Двоичное число : ");
	for (int i = 0; i < N; i++, ptr++)
	{
		*ptr = rand() % 2;
		printf("%d", *ptr);
	}
	cout << endl;
	ptr = arr;
	for (int i = 7; i > -1; i--, ptr++)
	{
		if (*ptr == 1) {
			sum+=pow(2, i);
		}
	}
	printf(" Десятичное число : %d \n", sum);
	int arr1[N];
	int dvo;
	int k = 0;
	while (sum > 0)
	{
		dvo = sum % 2;
		arr1[k] = dvo;
		sum /= 2;
		k++;
	}
	if (k < N)
	{
		for (int j = k; j < N; j++)
		{
			arr1[j] = 0;
		}
	}
	ptr = arr1 + N - 1;
	int *xPtr = arr1;
	printf(" Двоичное число : ");
	while (ptr >= xPtr)
	{
		cout << *ptr;
		ptr--;
	}
	cout <<endl;
	system("pause");
}
