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

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += scores[i];
    }

    int maxGrade = sum;

    if (maxGrade % 10 == 0) {
        for (int i = 0; i < N; i++) {
            if (scores[i] % 10 != 0) {
                maxGrade -= scores[i];
                break;
            }
        }
    }

    cout << maxGrade << endl;

    return 0;
}