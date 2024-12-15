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

    int result = 1;
    for (int i = 0; i < N - K; i++) {
        if (P[i] < P[i + K]) {
            result++;
        }
    }

    cout << result << endl;

    return 0;
}