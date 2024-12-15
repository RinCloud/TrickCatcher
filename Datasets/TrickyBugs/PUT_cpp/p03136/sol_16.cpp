#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int maxl;
	int sum=0;
	for(int i=0;i<n;i++){
		int l;
		cin >> l;
		sum+=l;
		maxl=max(maxl,l);
	}
	if(maxl<(sum-maxl)) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
