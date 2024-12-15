#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> scores(N);
    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    int totalScore = 0;
    for (int i = 0; i < N; i++) {
        totalScore += scores[i];
    }

    if (totalScore % 10 == 0) {
        int maxMultiple = 0;
        for (int i = 0; i < N; i++) {
            if (scores[i] % 10 != 0) {
                maxMultiple = max(maxMultiple, scores[i]);
            }
        }
        totalScore -= maxMultiple;
    }

    cout << totalScore << endl;

    return 0;
}