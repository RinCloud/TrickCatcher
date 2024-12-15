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
		if(temp>=2){ // Change the condition to check for 3 consecutive doublets
			cout << "Yes\n";
			cnt=1;
			break; // Exit the loop if 3 consecutive doublets are found
		}
	}
	if(!cnt) cout << "No\n";
}
