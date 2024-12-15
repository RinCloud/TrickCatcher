#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> operations(K + 1);
    for (int i = 1; i <= K; i++) {
        operations[i] = MOD - 1;
    }
    
    for (int i = 0; i < N; i++) {
        vector<int> new_operations(K + 1);
        for (int j = 0; j <= K; j++) {
            new_operations[j] = (new_operations[j] + operations[j]) % MOD;
            if (j >= A[i]) {
                new_operations[j - A[i]] = (new_operations[j - A[i]] + operations[j]) % MOD;
            }
        }
        operations = new_operations;
    }
    
    int result = 0;
    for (int i = 0; i <= K; i++) {
        result = (result + operations[i]) % MOD;
    }
    
    cout << result << endl;
    
    return 0;
}