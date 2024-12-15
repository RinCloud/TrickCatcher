#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    deque<int> D;
    for (int i = 0; i < N; i++) {
        int v;
        cin >> v;
        D.push_back(v);
    }

    int maxSum = 0;
    for (int i = 0; i <= min(N, K); i++) {
        for (int j = 0; i + j <= min(N, K); j++) {
            deque<int> hand;
            for (int k = 0; k < i; k++) {
                if (!D.empty()) {
                    hand.push_back(D.front());
                    D.pop_front();
                }
            }
            for (int k = 0; k < j; k++) {
                if (!D.empty()) {
                    hand.push_front(D.back());
                    D.pop_back();
                }
            }
            sort(hand.begin(), hand.end());
            
            int sum = 0;
            for (int k = 0; k < (int)hand.size(); k++) {
                sum += hand[k];
                if (sum < 0) {
                    break;
                }
            }
            maxSum = max(maxSum, sum);

            for (int k = 0; k < i; k++) {
                D.push_front(hand.back());
                hand.pop_back();
            }
            for (int k = 0; k < j; k++) {
                D.push_back(hand.front());
                hand.pop_front();
            }
        }
    }

    cout << maxSum << endl;

    return 0;
}