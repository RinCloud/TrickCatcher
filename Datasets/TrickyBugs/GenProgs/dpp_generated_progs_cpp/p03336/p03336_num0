#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    string S, T;
    cin >> S >> T;
    
    vector<int> A(N+1), B(M+1);
    for (int i = 0; i < N; i++) {
        A[N-i] = S[N-1-i] - '0';
    }
    for (int i = 0; i < M; i++) {
        B[M-i] = T[M-1-i] - '0';
    }
    
    int carry = 0;
    for (int i = 1; i <= K; i++) {
        A[i] += B[i] + carry;
        if (A[i] == 2) {
            A[i] = 0;
            carry = 1;
        } else {
            carry = 0;
        }
    }
    
    for (int i = 1; i <= N; i++) {
        cout << A[N-i+1];
    }
    cout << endl;
    
    for (int i = 1; i <= M; i++) {
        cout << B[M-i+1];
    }
    cout << endl;
    
    return 0;
}