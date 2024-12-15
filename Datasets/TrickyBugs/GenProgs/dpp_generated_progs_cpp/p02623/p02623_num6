#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int N, M, K;
    cin >> N >> M >> K;
 
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }
 
    vector<int> sumA(N+1, 0), sumB(M+1, 0);
    for (int i = 0; i < N; i++) {
        sumA[i+1] = sumA[i] + A[i];
    }
    for (int i = 0; i < M; i++) {
        sumB[i+1] = sumB[i] + B[i];
    }
 
    int maxBooks = 0;
    for (int i = 0; i <= N; i++) {
        if (sumA[i] > K) {
            break;
        }
        int j = upper_bound(sumB.begin(), sumB.end(), K - sumA[i]) - sumB.begin();
        maxBooks = max(maxBooks, i + j - 1);
    }
 
    cout << maxBooks << endl;
 
    return 0;
}