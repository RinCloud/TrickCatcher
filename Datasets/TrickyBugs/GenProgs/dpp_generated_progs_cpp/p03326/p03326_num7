#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<long long>> cakes(N, vector<long long>(3));
    for (int i = 0; i < N; i++) {
        cin >> cakes[i][0] >> cakes[i][1] >> cakes[i][2];
    }

    long long maxSum = 0;
    for (int mask = 0; mask < 8; mask++) {
        vector<long long> vals;
        for (int i = 0; i < N; i++) {
            long long sum = 0;
            for (int j = 0; j < 3; j++) {
                sum += (mask & (1 << j)) ? cakes[i][j] : -cakes[i][j];
            }
            vals.push_back(sum);
        }
        sort(vals.rbegin(), vals.rend());
        long long sum = 0;
        for (int i = 0; i < M; i++) {
            sum += vals[i];
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum << endl;

    return 0;
}