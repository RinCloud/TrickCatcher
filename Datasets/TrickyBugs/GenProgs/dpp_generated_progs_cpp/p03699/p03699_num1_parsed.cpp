#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> scores(N);
    int totalSum = 0;
    int maxMultipleOf10 = 0;

    for (int i = 0; i < N; i++) {
        cin >> scores[i];
        totalSum += scores[i];
        if (scores[i] % 10 != 0) {
            maxMultipleOf10 = max(maxMultipleOf10, scores[i]);
        }
    }

    int maxGrade = totalSum;

    if (maxGrade % 10 == 0) {
        maxGrade -= maxMultipleOf10;
    }

    cout << maxGrade << endl;

    return 0;
}