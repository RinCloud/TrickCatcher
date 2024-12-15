#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> m(N);
    for (int i = 0; i < N; i++) {
        cin >> m[i];
    }

    int minMoto = m[0];
    int sumMoto = m[0];
    for (int i = 1; i < N; i++) {
        minMoto = min(minMoto, m[i]);
        sumMoto += m[i];
    }

    int numberOfDoughnuts = N + (X - sumMoto) / minMoto;
    cout << numberOfDoughnuts << endl;

    return 0;
}