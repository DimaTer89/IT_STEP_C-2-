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
#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	double weight;
	double value;
	printf(" Хотите узнать свой родиевый эквивалент ? \n");
	printf(" Давайте подсчитаем \n");
	printf(" Пожалуйста, введите свой вес, выраженный в фунтах: ");
	cin>>weight;
	value = 770.0 * weight * 14.5833;
	printf(" Ваш родиевый эквивалент составляе %.2f \n", value);
	printf(" Вы легко можете стать достойным этого ! Если цена родия падает,\n");
	printf(" ешьте больше для поддержания своей стоимости.\n");
	system("pause");
}
