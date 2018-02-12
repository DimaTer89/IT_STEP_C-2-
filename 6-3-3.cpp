/*Создать массив указателей на строки, содержащие мужские и женские имена (имена задать литералами в программе).
Создать массив указателей на указатели, которые ссылаются на мужские имена в первом массиве. Аналогично создать массив указателей на указатели на женские имена.
Пользуясь указателями, распечатать общий список имен, список мужских и список женских имен.*/
#include <iostream>
#include <Windows.h>
using namespace std;
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int NAME = 10;
	char *names[] = { "Алексей","Дмитрий","Елена","Ярослав","Полина","Евгений","Ульяна","Денис","Екатерина","Инга" };
	char **male[] = { names,names + 1,names + 3,names + 5,names + 7 };
	char **female[] = { names + 2,names + 4,names + 6,names + 8,names + 9 };
	cout << " Общий список имён \n";
	for (int i = 0; i < NAME; i++)
	{
		cout << " " << names[i] << " ";
	}
	cout << endl;
	cout << " Список мужских имён \n";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << *male[i] << "  ";
	}
	cout << endl;
	cout << " Список женских имён \n";
	for (int i = 0; i < 5; i++)
	{
		cout << " " << *female[i] << "  ";
	}
	cout << endl;
	system("pause");
}
