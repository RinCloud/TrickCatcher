#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	rep(i, h){
		cin >> s[i];
	}
	
	vector<vector<int>> cnt(h+1, vector<int>(w+1));
	
	rep(i, h){
		int l = 0;
		rep(j, w+1){
			if(j == w || s[i][j] == '#'){
				for(int k=j-l; k<j; k++){
					cnt[i][k] += l;
				}
				l = 0;
			}else{
				l++;
			}
		}
	}
	rep(j, w){
		int l = 0;
		rep(i, h+1){
			if(i == h || s[i][j] == '#'){
				for(int k=i-l; k<i; k++){
					cnt[k][j] += l;
				}
				l = 0;
			}else{
				l++;
			}
		}
	}
	int max = 0;
	rep(i, h){
		rep(j, w){
			int range = cnt[i][j] + cnt[i+1][j] + cnt[i][j+1] + cnt[i+1][j+1] - 3;
			if(max < range) max = range;
		}
	}
	cout << max << endl;
	return 0;
}