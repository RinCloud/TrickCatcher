#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> P(N);
    for(int i = 0; i < N; i++) {
        cin >> P[i];
    }
    
    vector<int> S(N);
    for(int i = 0; i < N; i++) {
        if(P[i] > i + 1) {
            S[i] = 1;
        }
    }
    
    int cnt = count(S.begin(), S.end(), 1);
    if(cnt % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }
    
    vector<int> X, Y;
    for(int i = 0; i < N; i++) {
        if(S[i] == 0) {
            X.push_back(P[i]);
        }
        else {
            Y.push_back(P[i]);
        }
    }
    
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    vector<int> ans(N);
    int j = 0;
    for(int i = 0; i < N; i++) {
        if(S[i] == 0) {
            ans[i] = X[j++];
        }
        else {
            ans[i] = Y[j++];
        }
    }
    
    for(int i = 0; i < N; i++) {
        cout << ans[i];
    }
    
    cout << endl;
    
    return 0;
}
