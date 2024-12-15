#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<long long> A(N+1), B(N);
    for (int i = 0; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    
    long long totalMonsters = 0;
    for (int i = 0; i < N; i++) {
        long long defeated = min(A[i], B[i]);
        A[i] -= defeated;
        B[i] -= defeated;
        
        totalMonsters += defeated;
        
        defeated = min(A[i+1], B[i]);
        A[i+1] -= defeated;
        B[i] -= defeated;
        
        totalMonsters += defeated;
    }
    
    cout << totalMonsters << endl;
    
    return 0;
}