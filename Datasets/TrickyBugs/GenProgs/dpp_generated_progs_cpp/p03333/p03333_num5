#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> L(N);
    vector<int> R(N);
    
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }
    
    sort(L.begin(), L.end());
    sort(R.begin(), R.end());
    
    int min_distance = L[N / 2] - R[(N - 1) / 2];
    
    long long K = 0;
    
    for (int i = 0; i < N; i++) {
        K += abs(L[i] - R[i]);
    }
    
    K += min_distance;
    
    cout << K << endl;
    
    return 0;
}