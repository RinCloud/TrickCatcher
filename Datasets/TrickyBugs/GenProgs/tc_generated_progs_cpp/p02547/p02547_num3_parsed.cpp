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
		if(temp>=2){  // Change condition to check if doublets occurred at least three times in a row
			cout << "Yes\n";
			cnt=1;
			break;     // Exit the loop as soon as the condition is met
		}
	}
	if(!cnt) cout << "No\n";
}
