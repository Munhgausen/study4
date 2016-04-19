#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a;
	if (a < 100 && a>9) {
		cout << (a / 10) % 10 << " " << a % 10;
	}
	else if (a > 99 && a < 1000) {
		cout <<(a/100)%10<< " " << (a / 10) % 10 << " " << a % 10;
	}
	return 0;
}