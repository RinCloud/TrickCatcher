#include <iostream>
using namespace std;

int a, b, c, x, y, z, s;

int main() {
	cin >> a >> b >> c;
	if (a == b && b == c) {
		if (a % 2 == 0) {
			cout << -1 << endl;
		} else {
			cout << 0 << endl;
		}
		return 0;
	}
	for (s = 0; !(a % 2 || b % 2 || c % 2); s++) {
		x = (b + c) / 2;
		y = (a + c) / 2;
		z = (a + b) / 2;
		a = x, b = y, c = z;
	}
	cout << s << endl;
	return 0;
}