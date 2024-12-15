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

    sort(H.begin(), H.end(), greater<int>());

    int attackCount = 0;
    for (int i = K; i < N; i++) {
        attackCount += H[i];
    }

    cout << attackCount << endl;

    return 0;
}