#include <iostream>
using namespace std;
int a, b, c;
int main() {
	cin>>a>>b>>c;
	if(a==b && b==c) {cout<<a%2-1; return 0;}
	int s = 0;
	while(!(a%2 || b%2 || c%2)) {
		int x = (b+c)/2;
		int y = (a+c)/2;
		int z = (a+b)/2;
		a=x, b=y, c=z;
		s++;
		if (a==b && b==c) {
			cout<<-1; return 0;
		}
	}
	cout<<s;
	return 0;
}
