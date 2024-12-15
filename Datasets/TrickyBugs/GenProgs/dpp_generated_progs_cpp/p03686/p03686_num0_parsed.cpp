#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> positions;
    for (int i = 0; i < N; i++) {
        positions.push_back(L[i]);
        positions.push_back(R[i]);
        positions.push_back(R[i] + 1);
    }
    positions.push_back(0);
    positions.push_back(M + 1);
    sort(positions.begin(), positions.end());
    positions.erase(unique(positions.begin(), positions.end()), positions.end());

    int count = 0;
    for (int i = 0; i < positions.size() - 1; i++) {
        if (positions[i + 1] - positions[i] > 1) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}