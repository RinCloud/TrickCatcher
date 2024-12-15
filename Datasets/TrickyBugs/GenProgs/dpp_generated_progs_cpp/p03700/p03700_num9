#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> health(N);
    for (int i = 0; i < N; i++) {
        cin >> health[i];
    }

    long long explosions = 0;
    for (int i = 0; i < N; i++) {
        int remaining = health[i] - B * explosions;
        if (remaining <= 0) {
            continue;
        }
        int num_explosions = (remaining + A - 1) / A;
        explosions += num_explosions;
    }

    cout << explosions << endl;

    return 0;
}