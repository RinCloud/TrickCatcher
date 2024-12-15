#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<pair<int, int>> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i].first >> cards[i].second;
    }

    vector<int> Y(N + 1);
    for (int i = 0; i <= N; i++) {
        cin >> Y[i];
    }

    int Q;
    cin >> Q;

    vector<pair<int, int>> newCards(Q);
    for (int i = 0; i < Q; i++) {
        cin >> newCards[i].first >> newCards[i].second;
    }

    vector<int> maxScore(Q);
    for (int i = 0; i < Q; i++) {
        int maxPossibleScore = 0;
        for (int j = 0; j < N; j++) {
            if (newCards[i].first <= cards[j].first && cards[j].second >= Y[j]) {
                maxPossibleScore++;
            }
        }
        maxScore[i] = maxPossibleScore;
    }

    for (int i = 0; i < Q; i++) {
        cout << maxScore[i] << endl;
    }

    return 0;
}