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

    map<long long, int> freq;
    freq[0]++;
    long long sum = 0;
    long long ans = 0;
    for (int i = 0; i < N; i++) {
        sum += A[i];
        sum %= M;
        ans += freq[sum];
        freq[sum]++;
    }

    cout << ans << endl;
    return 0;
}