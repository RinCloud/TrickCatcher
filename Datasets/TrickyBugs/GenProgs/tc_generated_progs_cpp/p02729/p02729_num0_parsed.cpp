#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, m, a = 0; //Initialize a = 0
	cin >> n >> m;
	a += (n * (n - 1)) / 2; //Change n to n - 1
	a += (m * (m - 1)) / 2; //Change m to m - 1
	cout << a;
}
