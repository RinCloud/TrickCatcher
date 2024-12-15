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

    int answer = 0;

    for (int i = 0; i < N - K + 1; i++) {
        vector<int> sortedP = P;
        sort(sortedP.begin() + i, sortedP.begin() + i + K);
        if (sortedP == P) {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}