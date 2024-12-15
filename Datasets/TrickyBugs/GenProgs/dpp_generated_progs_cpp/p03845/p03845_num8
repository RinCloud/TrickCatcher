#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }

    int M;
    cin >> M;

    vector<pair<int, int>> drinks;
    for (int i = 0; i < M; i++) {
        int P, X;
        cin >> P >> X;
        drinks.push_back(make_pair(P, X));
    }

    for (int i = 0; i < M; i++) {
        int total_time = 0;
        for (int j = 0; j < N; j++) {
            if (j == drinks[i].first - 1) {
                total_time += drinks[i].second;
            } else {
                total_time += T[j];
            }
        }
        cout << total_time << endl;
    }

    return 0;
}