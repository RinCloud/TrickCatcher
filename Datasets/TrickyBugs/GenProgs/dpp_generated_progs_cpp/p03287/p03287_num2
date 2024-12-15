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

    map<int, int> freq;
    freq[0] = 1;

    int sum = 0;
    long long int ans = 0;
    for (int i = 0; i < N; i++) {
        sum = (sum + A[i]) % M;
        ans += freq[sum];
        freq[sum]++;
    }

    cout << ans << endl;

    return 0;
}