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
		if(temp>=2){  // Change from temp==3 to temp>=2
			cout << "Yes\n";
			cnt=1;
			break;  // Add break so that it stops checking further after finding 3 consecutive doublets
		}
	}
	if(!cnt) cout << "No\n";
}
