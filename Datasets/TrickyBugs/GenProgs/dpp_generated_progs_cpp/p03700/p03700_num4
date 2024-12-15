#include <iostream>
#include <vector>
#include <algorithm>

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
        health[i] -= A;
        explosions++;
        if (health[i] > 0 && B > 0) {
            int extraExplosions = (health[i] + B - 1) / B;
            explosions += extraExplosions;
        }
    }

    cout << explosions << endl;

    return 0;
}