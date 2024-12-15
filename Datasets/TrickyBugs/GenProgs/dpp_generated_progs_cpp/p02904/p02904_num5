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
    for (int i = 0; i <= N - K; i++) {
        vector<int> temp(P.begin() + i, P.begin() + i + K);
        sort(temp.begin(), temp.end());
        bool valid = true;
        for (int j = i + 1; j < i + K; j++) {
            if (temp[j - i] - temp[j - i - 1] != 1) {
                valid = false;
                break;
            }
        }
        if (valid) {
            answer++;
        }
    }

    cout << answer;

    return 0;
}