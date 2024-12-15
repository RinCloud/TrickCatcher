#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int a = 0;
	cin >> s;
	for (int i = 0; i < 4; i++) {
		if (s[i] == '+')
		    a += 1;
		if (s[i] == '-')
		    a -= 1;
	}
	cout << a;
}
