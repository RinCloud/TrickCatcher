#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> B(M);
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
    
    vector<int> prefix_sum_A(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefix_sum_A[i] = prefix_sum_A[i-1] + A[i-1];
    }
    
    vector<int> prefix_sum_B(M+1, 0);
    for (int i = 1; i <= M; i++) {
        prefix_sum_B[i] = prefix_sum_B[i-1] + B[i-1];
    }
    
    int max_books = 0;
    
    for (int i = 0, j = M; i <= N; i++) {
        if (prefix_sum_A[i] > K) {
            break;
        }
        
        while (prefix_sum_B[j] > K - prefix_sum_A[i]) {
            j--;
        }
        
        max_books = max(max_books, i + j);
    }
    
    cout << max_books << endl;

    return 0;
}