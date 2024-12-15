#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long ans = 1;
    
    if (A.back() <= 0) {
        for (int i = N - 1; i >= N - K; i--) {
            ans = (ans * A[i]) % MOD;
        }
    } else {
        vector<long long> pos, neg;
        for (int i = 0; i < N; i++) {
            if (A[i] >= 0) {
                pos.push_back(A[i]);
            } else {
                neg.push_back(A[i]);
            }
        }
        
        if (K % 2 == 1 && pos.size() == 0) {
            for (int i = N - 1; i >= N - K; i--) {
                ans = (ans * A[i]) % MOD;
            }
        } else {
            int i = 0, j = neg.size() - 1;
            
            while (K > 0) {
                if (K >= 2) {
                    if (pos.size() > i + 1 && neg.size() > j) {
                        long long prod1 = (pos[i] * pos[i + 1]) % MOD;
                        long long prod2 = (neg[j] * neg[j - 1]) % MOD;
                        
                        if (prod1 >= prod2) {
                            ans = (ans * prod1) % MOD;
                            i += 2;
                            K -= 2;
                        } else {
                            ans = (ans * prod2) % MOD;
                            j -= 2;
                            K -= 2;
                        }
                    } else if (pos.size() > i + 1) {
                        ans = (ans * (pos[i] * pos[i + 1]) % MOD) % MOD;
                        i += 2;
                        K -= 2;
                    } else {
                        ans = (ans * (neg[j] * neg[j - 1]) % MOD) % MOD;
                        j -= 2;
                        K -= 2;
                    }
                } else {
                    if (pos.size() > i) {
                        ans = (ans * pos[i]) % MOD;
                        i++;
                        K--;
                    } else {
                        ans = (ans * neg[j]) % MOD;
                        j--;
                        K--;
                    }
                }
            }
        }
    }
    
    cout << (ans + MOD) % MOD << endl;
    
    return 0;
}