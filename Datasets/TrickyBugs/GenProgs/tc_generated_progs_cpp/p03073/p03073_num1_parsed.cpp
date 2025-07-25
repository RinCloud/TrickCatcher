#include <iostream>
using namespace std;
int main(){
	int t=0;
	string s, a;
	cin >> s;
	// If there is only 1 tile, no tiles need to be repainted
	if (s.size() == 1) {
		cout << "0" << endl;
		return 0;
	}
	// Loop through the string starting from the second character
	for (int i=1; i<s.size(); i++) {
		// If the current tile color is the same as the previous tile color
		if (s[i]==s[i-1]){
			// Increment the counter
			t++;
			// Change the color of the current tile to the opposite color
			if (s[i-1]=='1'){
				s[i]= '0';
			} else if (s[i-1]=='0'){
				s[i]= '1';
			}
		}
	}
	cout << t << endl;
	return 0;
}
