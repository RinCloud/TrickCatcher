#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        cin >> P[i];
    }

    vector<int> sortedP(N);
    for (int i = 0; i < N; i++) {
        sortedP[i] = P[i];
    }

    sort(sortedP.begin(), sortedP.end());

    int count = 0;
    for (int i = 0; i <= N - K; i++) {
        vector<int> tempP = P;
        sort(tempP.begin() + i, tempP.begin() + i + K);
        if (tempP == sortedP) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}