/* Выводит все элементы массива с четными индексами (то есть A[0], A[2], A[4], ...).*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> a;
	//считывание
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if (i % 2 == 0) {
			a.push_back(temp);
		}
	}
	//обработка и вывод
	for (int i = a.size() - 1; i >= 0; i--) {
		cout << a[i] << " ";
	}
	return 0;
}
