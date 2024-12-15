#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,temp=0;
	cin >> t;
	bool cnt=0;
	while(t--){
		int a,b;
		cin >> a >> b;
		if(a==b) temp++;
		else temp=0;
		if(temp>=3){  // fix: changed 'temp==3' to 'temp>=3' to check for three or more occurrences
			cout << "Yes\n";
			cnt=1;
		}
	}
	if(!cnt) cout << "No\n";
}
