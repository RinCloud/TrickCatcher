#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1;

    long long ans = 0;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + A[i]) % M;
        ans += prefixSumCount[sum];
        prefixSumCount[sum]++;
    }
    
    cout << ans << endl;

    return 0;
}