#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	//1) ����������� �����������

	/*double k, s = 0; //� - �����, s - �������� �����
	char c; //�  ��������

	while (1){
		cout << "������� �����: "; cin >> k;
		cout << "������� ��������: "; cin >> c;
		switch (c) {
		case('+'): s += k; break;
		case('-'): s -= k; break;
		case('*'): s *= k; break;
		case('/'): s /= k; break;
		default:cout << "������ �����, ������� ���� �� �������� -+/*"; break;
			cout << endl;
		}cout << "S = " << s << endl;
	}system("pause");*/



	//2)����� ���� �����/���

	int x, y(0), s(0);
	cout << "x = ";
	cin >> x;
	while (x > 0) {
		y = x % 10;
		s += y;
		x /= 10;
	}cout << "������ ����� ��������� �����";
	if (s % 2 == 0) cout << "������\n";
	else cout << "��������\n";
	cout << endl;
	system("pause");
}