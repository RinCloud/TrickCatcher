#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canSelectPopularItems(int N, int M, vector<int>& votes) {
    int totalVotes = 0;
    for (int i = 0; i < N; i++) {
        totalVotes += votes[i];
    }

    int minVotes = totalVotes / (4 * M);
    int selectedItems = 0;

    for (int i = 0; i < N; i++) {
        if (votes[i] >= minVotes) {
            selectedItems++;
        }
    }

    return selectedItems >= M;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> votes(N);
    for (int i = 0; i < N; i++) {
        cin >> votes[i];
    }

    if (canSelectPopularItems(N, M, votes)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}