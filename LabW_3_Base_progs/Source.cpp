#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1) бесконечный каьлкулятор

	/*double k, s = 0; //к - число, s - итоговое число
	char c; //с  действие

	while (1){
		cout << "Введите число: "; cin >> k;
		cout << "Введите действие: "; cin >> c;
		switch (c) {
		case('+'): s += k; break;
		case('-'): s -= k; break;
		case('*'): s *= k; break;
		case('/'): s /= k; break;
		default:cout << "Ошибка ввода, введите один из символов -+/*"; break;
			cout << endl;
		}cout << "S = " << s << endl;
	}system("pause");*/



	//2)сумма цифр нечёт/чёт

	int x, y(0), s(0);
	cout << "x = ";
	cin >> x;
	while (x > 0) {
		y = x % 10;
		s += y;
		x /= 10;
	}cout << "суммма чисел ввёденного числа";
	if (s % 2 == 0) cout << "чётная\n";
	else cout << "нечётная\n";
	cout << endl;
	system("pause");
}