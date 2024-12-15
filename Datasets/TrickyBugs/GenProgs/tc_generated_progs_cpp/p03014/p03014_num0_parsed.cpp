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
    
    vector<vector<int>> cnt(h, vector<int>(w, 0));
    
    rep(i, h){
        int l = 1;
        rep(j, w){
            // check left direction
            if (s[i][j] == '#') {
                l = 1;
            } else {
                cnt[i][j] += l;
                l++;
            }
        }
        
        l = 1;
        for (int j = w - 1; j >= 0; j--) {
            // check right direction
            if (s[i][j] == '#') {
                l = 1;
            } else {
                cnt[i][j] += l;
                l++;
            }
        }
    }
    
    rep(j, w){
        int l = 1;
        rep(i, h){
            // check up direction
            if (s[i][j] == '#') {
                l = 1;
            } else {
                cnt[i][j] += l;
                l++;
            }
        }
        
        l = 1;
        for (int i = h - 1; i >= 0; i--) {
            // check down direction
            if (s[i][j] == '#') {
                l = 1;
            } else {
                cnt[i][j] += l;
                l++;
            }
        }
    }
    
    int max = 0;
    rep(i, h){
        rep(j, w){
            if (cnt[i][j] > max) {
                max = cnt[i][j];
            }
        }
    }
    
    cout << max << endl;
    return 0;
}
