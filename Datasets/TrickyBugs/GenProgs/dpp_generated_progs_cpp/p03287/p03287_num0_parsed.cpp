#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }

    vector<int> prefixSum(N+1);
    for(int i=1; i<=N; i++) {
        prefixSum[i] = (prefixSum[i-1] + A[i-1]) % M;
    }

    long long res = 0;
    vector<long long> count(M,0);
    for(int i=0; i<N+1; i++) {
        res += count[prefixSum[i]];
        count[prefixSum[i]]++;
    }

    cout << res << endl;

    return 0;
}