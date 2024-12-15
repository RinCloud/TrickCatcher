#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    int g = A[0];
    for (int i = 1; i < N; i++) {
        g = __gcd(g, A[i]);
    }
    
    if (K % g == 0 && K <= A[N - 1]) {
        cout << "POSSIBLE" << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    
    return 0;
}