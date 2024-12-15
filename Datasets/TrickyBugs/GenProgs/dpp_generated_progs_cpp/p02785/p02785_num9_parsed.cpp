#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> H(N);
    for(int i = 0; i < N; i++) {
        cin >> H[i];
    }
    sort(H.begin(), H.end(), greater<int>());
    long long ans = 0;
    for(int i = K; i < N; i++) {
        ans += H[i];
    }
    cout << ans << endl;
    return 0;
}