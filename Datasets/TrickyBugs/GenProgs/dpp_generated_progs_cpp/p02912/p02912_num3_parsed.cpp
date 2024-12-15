#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end(), greater<int>());
    
    int i = 0;
    while (M > 0 && i < N) {
        int num_tickets = min(M, (int)log2(A[i]));
        A[i] /= pow(2, num_tickets);
        M -= num_tickets;
        i++;
    }
    
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        ans += A[i];
    }
    
    cout << ans << endl;
    
    return 0;
}