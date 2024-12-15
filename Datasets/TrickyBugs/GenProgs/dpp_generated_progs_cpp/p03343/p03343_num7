#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    int ans = INT_MAX;
    for(int i=0; i<n; i++) {
        vector<int> seq;
        for(int j=0; j<n; j++) {
            if(a[j] < a[i]) {
                seq.push_back(a[j]);
                if(seq.size() >= k) {
                    sort(seq.begin(), seq.end());
                    seq.erase(seq.begin());
                }
            }
        }
        if(seq.size() >= q) {
            sort(seq.begin(), seq.end());
            ans = min(ans, seq[q-1] - seq[0]);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}