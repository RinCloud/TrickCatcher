#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }

    unordered_map<int, int> count;
    int distinct = 0;
    int left = 0;
    int minRewrite = N;

    for (int right = 0; right < N; right++) {
        count[balls[right]]++;
        if (count[balls[right]] == 1) {
            distinct++;
        }

        while (distinct > K) {
            count[balls[left]]--;
            if (count[balls[left]] == 0) {
                distinct--;
            }
            left++;
        }

        minRewrite = min(minRewrite, right - left + 1);
    }

    cout << minRewrite << endl;

    return 0;
}