#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    // Sort the scores in non-decreasing order
    sort(scores.begin(), scores.end());

    int totalScore = 0;
    for (int i = 0; i < N; i++) {
        totalScore += scores[i];
    }

    // If the total score is a multiple of 10, find the maximum score that is not a multiple of 10
    if (totalScore % 10 == 0) {
        for (int i = N - 1; i >= 0; i--) {
            if (scores[i] % 10 != 0) {
                totalScore -= scores[i];
                break;
            }
        }
    }

    cout << totalScore << endl;

    return 0;
}