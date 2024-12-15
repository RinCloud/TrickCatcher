#include <bits/stdc++.h>
using namespace std;

int main() {
	int  n;
	cin >> n;
	set<int> se;
	for(int i;i<n;i++){
		int b;
		cin >> b;
		se.insert(b);
	}
	cout<<se.size()<<endl;
	return 0;
}