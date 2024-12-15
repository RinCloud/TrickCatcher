#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	
	int h, w;
	cin >> h >> w;
	vector<string> s(h+1);
	rep(i, h){
		cin >> s[i];
		s[i] += '#';
	}
	rep(i, w) s[h][i] += '#';
	
	vector<vector<int>> cnt(h, vector<int>(w));
	
	rep(i, h){
		int l = 0;
		rep(j, w+1){
			if(s[i][j] == '#'){
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
			if(s[i][j] == '#'){
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
			int range = cnt[i][j] - 1;
			if(max < range) max = range;
		}
	}
	cout << max << endl;
	return 0;
}