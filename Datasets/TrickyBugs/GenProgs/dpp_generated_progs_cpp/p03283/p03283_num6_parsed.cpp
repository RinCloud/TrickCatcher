#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M >> Q;

    // create a 2D array to store the train information
    vector<vector<int>> trains(M, vector<int>(2));
    for (int i = 0; i < M; i++) {
        cin >> trains[i][0] >> trains[i][1];
    }

    // process the queries
    for (int i = 0; i < Q; i++) {
        int p, q;
        cin >> p >> q;

        // count the number of trains that run strictly within the section from City p to City q
        int count = 0;
        for (int j = 0; j < M; j++) {
            if (trains[j][0] >= p && trains[j][1] <= q) {
                count++;
            }
        }

        // print the result
        cout << count << endl;
    }

    return 0;
}