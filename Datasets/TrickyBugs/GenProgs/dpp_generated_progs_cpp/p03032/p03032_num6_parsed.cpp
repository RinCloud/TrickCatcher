#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    int maxSum = 0;

    for (int numTakeFromLeft = 0; numTakeFromLeft <= K; numTakeFromLeft++) {
        for (int numTakeFromRight = 0; numTakeFromRight <= K - numTakeFromLeft; numTakeFromRight++) {
            int currSum = 0;
            vector<int> jewels;

            for (int i = 0; i < numTakeFromLeft; i++) {
                jewels.push_back(V[i]);
                currSum += V[i];
            }

            for (int i = N - 1; i >= N - numTakeFromRight; i--) {
                jewels.push_back(V[i]);
                currSum += V[i];
            }

            sort(jewels.begin(), jewels.end());

            for (int i = 0; i < min(K - numTakeFromLeft - numTakeFromRight, int(jewels.size())) && jewels[i] < 0; i++) {
                currSum -= jewels[i];
            }

            maxSum = max(maxSum, currSum);
        }
    }

    cout << maxSum << endl;

    return 0;
}