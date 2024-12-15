#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> c(n-1);
    vector<int> s(n-1);
    vector<int> f(n-1);
    for(int i=0; i<n-1; i++) {
        cin >> c[i] >> s[i] >> f[i];
    }
    
    for(int i=0; i<n; i++) {
        int ans = 0;
        for(int j=i; j<n-1; j++) {
            if(ans < s[j]) {
                ans = s[j];
            } else if(ans % f[j] != 0) {
                ans += f[j] - (ans % f[j]);
            }
            ans += c[j];
        }
        cout << ans << endl;
    }
    
    return 0;
}