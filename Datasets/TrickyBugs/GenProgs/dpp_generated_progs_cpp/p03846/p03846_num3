#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    if (N % 2 == 0) {
        for (int i = 0; i < N; i += 2) {
            if (A[i] != i || A[i+1] != i) {
                cout << 0 << endl;
                return 0;
            }
        }
    } else {
        if (A[0] != 0) {
            cout << 0 << endl;
            return 0;
        }
        
        for (int i = 1; i < N; i += 2) {
            if (A[i] != i || A[i+1] != i) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    
    int ans = 1;
    for (int i = 0; i < N/2; i++) {
        ans = (ans * 2) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}