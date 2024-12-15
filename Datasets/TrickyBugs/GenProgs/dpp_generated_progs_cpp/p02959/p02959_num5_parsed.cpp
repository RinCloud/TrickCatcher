#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N + 1);
    vector<int> B(N);

    for (int i = 0; i <= N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

    int totalMonsters = 0;

    for (int i = 0; i < N; i++) {
        int defeatedMonsters = min(A[i], B[i]);
        totalMonsters += defeatedMonsters;

        A[i] -= defeatedMonsters;
        B[i] -= defeatedMonsters;

        defeatedMonsters = min(A[i+1], B[i]);

        totalMonsters += defeatedMonsters;

        A[i+1] -= defeatedMonsters;
        B[i] -= defeatedMonsters;
    }

    cout << totalMonsters << endl;

    return 0;
}