#include<iostream>
#include<string>
using namespace std;
int main() {
	int k;
	cin>>k;
	long long num = 7;
	for(int i=1; i<=1e6+3; i++) {
		if(num%k == 0) {
			cout<<i<<"\n";
			return 0;
		}
		else {
			num = (num*10)+7;
		}
	}
	cout<<-1<<"\n";
	return 0;
}