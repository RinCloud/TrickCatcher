#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    int l = 0, r = N;
    while (r-l > 1) {
        int c = (l+r)/2;
        map<int, int> mp;
        for (int i = 1; i < N; i++) {
            if (A[i] >= 100000) continue;
            if (A[i-1] > A[i]) {
                int t = A[i];
                mp[t]++;
                auto it = mp.upper_bound(t);
                mp.erase(it, mp.end());
                while (t > 0 && mp[t] == c) {
                    mp[t] = 0;
                    mp[t-1]++;
                    t--;
                }
            }
            if (mp[0] > 0) break;
        }
        if (mp[0] == 0) r = c;
        else l = c;
    }
    cout << r << endl;
    return 0;
}