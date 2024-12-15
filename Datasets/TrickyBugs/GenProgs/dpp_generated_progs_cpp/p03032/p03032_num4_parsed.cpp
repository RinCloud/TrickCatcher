#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    deque<int> D;
    for (int i = 0; i < N; i++) {
        int jewel;
        cin >> jewel;
        D.push_back(jewel);
    }

    int max_sum = 0;
    for (int A = 0; A <= min(N, K); A++) {
        for (int B = 0; B <= min(N - A, K - A); B++) {
            deque<int> hand;
            for (int i = 0; i < A; i++) {
                hand.push_back(D[i]);
            }
            for (int i = 0; i < B; i++) {
                hand.push_back(D[N - 1 - i]);
            }
            sort(hand.begin(), hand.end());
            int sum = 0;
            for (int i = 0; i < hand.size(); i++) {
                if (i < K - A - B && hand[i] < 0) {
                    continue;
                }
                sum += hand[i];
            }
            max_sum = max(max_sum, sum);
        }
    }

    cout << max_sum << endl;

    return 0;
}