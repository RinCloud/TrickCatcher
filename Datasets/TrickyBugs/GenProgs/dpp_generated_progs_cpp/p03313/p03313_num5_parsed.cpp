#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int size = 1 << N;
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }
    
    vector<int> dp(size);
    for (int K = 1; K < size; K++) {
        dp[K] = -1;
        for (int i = 0; i < N; i++) {
            if ((K >> i) & 1) {
                for (int j = 0; j < i; j++) {
                    if (((K >> j) & 1) && (dp[K] < A[i] + A[j])) {
                        dp[K] = A[i] + A[j];
                    }
                }
            }
        }
        cout << dp[K] << endl;
    }
    
    return 0;
}