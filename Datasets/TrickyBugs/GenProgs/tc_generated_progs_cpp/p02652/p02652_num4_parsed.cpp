#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.size();
	int l = 0, r = 0;
	int l0 = 0, r0 = 0;
	int l1 = -2, r1 = 2;
	int ans = 0;

	for(int i = 0; i < n; i++){
		char c = s[i];
		if(c == '1'){
			l0++;
			r0++;
			if(l1 != -2) l1++;
			if(r1 != 2) r1++;
		}
		else if(c == '0'){
			l0--;
			r0--;
			if(l1 != -2) l1--;
			if(r1 != 2) r1--;
		}
		else{
			l0--;
			r0++;
			if(l1 != -2) l1--;
			if(r1 != 2) r1++;
		}
		int d = (r0 - l0) % 2 == 0 ? 2 : 1;

		while(l0 < l){
			l1 = l0;
			l0 += d;
		}
		while(r0 > r){
			r1 = r0;
			r0 -= d;
		}
		if(l0 > r0){
			if(l1 != -2 && r1 != 2){
				l0=fmax(l1, l);
				r0=fmin(r1, r);
			}
			else if(l1 != -2){
				l0 = r0 = l1;
			}
			else{
				r0 = l0 = r1;
			}
		}
		ans = fmax(ans, r0 - l0);
	}

	cout << ans << endl;
	return 0;
}
