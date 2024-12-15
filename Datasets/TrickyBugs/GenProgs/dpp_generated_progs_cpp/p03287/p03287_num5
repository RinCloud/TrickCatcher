#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<int> prefixSum(N);
    prefixSum[0] = A[0];
    for (int i = 1; i < N; i++) {
        prefixSum[i] = prefixSum[i-1] + A[i];
    }
    
    long long ans = 0;
    map<long long, int> count;
    for (int i = 0; i < prefixSum.size(); i++) {
        long long rem = prefixSum[i] % M;
        if (rem == 0) {
            ans++;
        }
        ans += count[rem];
        count[rem]++;
    }
    
    cout << ans << endl;
    
    return 0;
}