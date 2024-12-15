#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> H(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }

    sort(H.begin(), H.end());

    int minOps = 0;
    for (int i = 0; i < N - K; i++) {
        minOps += H[i];
    }

    cout << minOps << endl;

    return 0;
}