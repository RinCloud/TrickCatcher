#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    sort(A.begin(), A.end());
    
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        ans += (long long) A[i] * abs(i - (N-1)/2);
    }
    
    cout << ans << endl;
    
    return 0;
}