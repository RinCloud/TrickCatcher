#include <iostream>
using namespace std;
int a, b, c, x, y, z, s;
int main() {
	cin>>a>>b>>c;

    // count the number of odd numbers
    int oddCount = 0;
    oddCount += (a % 2 == 1);
    oddCount += (b % 2 == 1);
    oddCount += (c % 2 == 1);

    // if there are already two or more odd numbers, so it will be infinite
    if (oddCount >= 2) {
        cout << -1;
        return 0;
    }

	for(s=0; !(a%2 || b%2 || c%2); s++) {
		x = (b+c)/2;
		y = (a+c)/2;
		z = (a+b)/2;
		a=x, b=y, c=z;
	}
	cout<<s;
	return 0;
}
