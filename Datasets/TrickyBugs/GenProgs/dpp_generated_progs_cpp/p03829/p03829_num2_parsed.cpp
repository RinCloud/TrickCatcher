#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int total_fatigue = 0;
    for (int i = 0; i < N - 1; i++) {
        int distance = X[i + 1] - X[i];
        int teleport_fatigue = distance * B;
        int walk_fatigue = distance * A;
        total_fatigue += min(teleport_fatigue, walk_fatigue);
    }

    cout << total_fatigue << endl;

    return 0;
}