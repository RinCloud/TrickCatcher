#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> ar, br;

int main(){
	cin >> n;
	
	ar.resize(n);
	br.resize(n);
	
	for (int i = 0; i < n; i++){
		cin >> ar[i];
		br[i] = ar[i];
	}
	
	sort(br.begin(), br.end());
	
	int ans = 0;
	
	for (int i = 0; i < n; i++){
		int tmp = distance(ar.begin(), lower_bound(br.begin(), br.end(), ar[i]));
		
		if ((i % 2 == 0 && tmp % 2 == 1) || (i % 2 == 1 && tmp % 2 == 0))
			ans++;
	}
	
	cout << ans << "\n";
	
	return 0;
}
