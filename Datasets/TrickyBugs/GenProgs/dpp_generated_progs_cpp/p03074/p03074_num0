#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;

    // Count the maximum consecutive people standing on hands
    vector<int> consecutiveCount;
    int count = 0;
    for (char c : S) {
        if (c == '0') { // Standing on feet
            count++;
        } else { // Standing on hands
            consecutiveCount.push_back(count);
            count = 0;
        }
    }
    consecutiveCount.push_back(count);

    int maxConsecutiveHands = *max_element(consecutiveCount.begin(), consecutiveCount.end());

    // Flipping consecutive people to maximize the number of hands
    int numFlips = min(K, (int)consecutiveCount.size() / 2);
    for (int i = 0; i < numFlips * 2; i += 2) {
        maxConsecutiveHands += consecutiveCount[i] + consecutiveCount[i + 1];
    }

    cout << maxConsecutiveHands << endl;

    return 0;
}