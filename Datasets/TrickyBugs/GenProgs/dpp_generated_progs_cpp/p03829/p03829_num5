#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int total_fatigue = 0;
    for (int i = 1; i < N; i++) {
        int distance = X[i] - X[i-1];
        total_fatigue += min(distance * A, B);
    }

    cout << total_fatigue << endl;

    return 0;
}