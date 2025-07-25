#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    vector<vector<int>> operations(N);
    for (int i = 0; i < N; i++) {
        operations[i].push_back(i + 1);
    }

    for (int i = 0; i < N; i++) {
        if (b[i] > i + 1) {
            cout << -1 << endl;
            return 0;
        }
        int numToShift = i - b[i] + 1;
        for (int j = 0; j < numToShift; j++) {
            int lastElement = operations[i].back();
            operations[i].pop_back();
            operations[lastElement - 1].push_back(lastElement);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int x : operations[i]) {
            cout << x << endl;
        }
    }

    return 0;
}
