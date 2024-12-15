#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<pair<int, int>> BC(M);
    for (int i = 0; i < M; i++) {
        cin >> BC[i].first >> BC[i].second;
    }
    
    sort(BC.rbegin(), BC.rend());
    
    int idx = 0;
    for (int i = 0; i < N; i++) {
        if (idx < M && BC[idx].first > 0) {
            A[i] = max(A[i], BC[idx].second);
            BC[idx].first--;
            if (BC[idx].first == 0) {
                idx++;
            }
        }
    }
    
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
    }
    
    cout << sum << endl;
    
    return 0;
}