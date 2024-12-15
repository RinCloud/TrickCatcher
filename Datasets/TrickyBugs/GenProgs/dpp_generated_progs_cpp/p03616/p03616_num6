#include <iostream>
#include <vector>

using namespace std;

int main() {
    int X, K, Q;
    cin >> X >> K;
    
    vector<int> r(K);
    for (int i = 0; i < K; i++) {
        cin >> r[i];
    }
    
    cin >> Q;
    
    vector<long long> t(Q), a(Q);
    for (int i = 0; i < Q; i++) {
        cin >> t[i] >> a[i];
    }
    
    vector<long long> sandA(K + 1);
    int index = 0;
    long long sand = X;
    for (int i = 1; i <= K; i++) {
        sand -= r[i - 1] - r[i - 1 - index];
        sandA[i] = sand;
        if (sand <= 0) {
            if (i < K) {
                index = i;
                sand = X;
            } else {
                sand = 0;
            }
        }
    }
    
    for (int i = 0; i < Q; i++) {
        int j = lower_bound(r.begin(), r.end(), t[i] + 1) - r.begin();
        if (sandA[j] <= a[i]) {
            cout << X << endl;
        } else {
            cout << X - (sandA[j] - a[i]) << endl;
        }
    }
    
    return 0;
}