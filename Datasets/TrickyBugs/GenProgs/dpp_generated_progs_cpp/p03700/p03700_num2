#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    long long explosions = 0;
    for (int i = 0; i < N; i++) {
        int remaining_damage = h[i] % (A + B);
        explosions += (h[i] / (A + B));

        if (remaining_damage > 0) {
            if (remaining_damage <= A) {
                explosions++;
            } else {
                explosions += 2;
            }
        }
    }

    cout << explosions << endl;

    return 0;
}