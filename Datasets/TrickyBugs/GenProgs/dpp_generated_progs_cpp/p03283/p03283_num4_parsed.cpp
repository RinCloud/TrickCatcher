#include <iostream>
#include <vector>

using namespace std;

vector<int> countTrains(int N, int M, int Q, vector<pair<int, int>>& trains, vector<pair<int, int>>& queries) {
    // create a 2D vector to store the train count for each query
    vector<vector<int>> trainCount(Q, vector<int>(M, 0));

    // loop through each query
    for (int i = 0; i < Q; i++) {
        int p = queries[i].first;
        int q = queries[i].second;

        // loop through each train
        for (int j = 0; j < M; j++) {
            int L = trains[j].first;
            int R = trains[j].second;

            // check if the train runs strictly within the section from City p to City q
            if (p <= L && R <= q) {
                trainCount[i][j] = 1;
            }
        }
    }

    // calculate the total train count for each query
    vector<int> totalTrainCount(Q, 0);
    for (int i = 0; i < Q; i++) {
        for (int j = 0; j < M; j++) {
            totalTrainCount[i] += trainCount[i][j];
        }
    }

    return totalTrainCount;
}

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    vector<pair<int, int>> trains(M);
    vector<pair<int, int>> queries(Q);

    for (int i = 0; i < M; i++) {
        cin >> trains[i].first >> trains[i].second;
    }

    for (int i = 0; i < Q; i++) {
        cin >> queries[i].first >> queries[i].second;
    }

    vector<int> result = countTrains(N, M, Q, trains, queries);

    for (int i = 0; i < Q; i++) {
        cout << result[i] << endl;
    }

    return 0;
}