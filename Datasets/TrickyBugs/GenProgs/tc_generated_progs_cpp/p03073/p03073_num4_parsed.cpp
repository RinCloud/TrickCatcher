#include <iostream>
using namespace std;
int main(){
	int t=0;
	string s;
	cin >> s;
	if(s.size() > 1) {
		for (int i=1; i<s.size(); i++) {
			if (s[i]==s[i-1]){
				t++;
				if (s[i-1]=='1'){
					s[i]= '0';
				}else if (s[i-1]=='0'){
					s[i]= '1';
				}
			}
		}
	}
	cout << t << endl;
	return 0;
}
