#include<iostream>
using namespace std;
long double x, y, z = 0, a, w;
int i = 1;
int main() {
	setlocale(0, "");
	do {
		cout << "введите удовлетвор€ющее значение х" << "\n";
		cin >> x;
	} while (x >= 1 || x <= -1);
	do {
		cout << "введите эпсилон" << "\n";
		cin >> y;
		w = y;
		if (w >= 1 || w <= 0)
			w = 0;
		else while (w < 1)
			w = w * 10;
	} while (w != 1);
	a = 1;
	do {
		z += a;
		a = (-a * i) * x / (i + 1);
		i += 2;
	} while (abs(a) > y);
	cout << z << "\n";
	cout << "через базовую функцию  " << 1 / sqrt(1 + x);
	return(0);
}
