#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> X(N);
    for (int i = 0; i < N; i++) {
        cin >> X[i];
    }

    int minStamina = INT_MAX;
    for (int P = 1; P <= 100; P++) {
        int stamina = 0;
        for (int i = 0; i < N; i++) {
            stamina += pow(X[i] - P, 2);
        }
        minStamina = min(minStamina, stamina);
    }

    cout << minStamina << endl;

    return 0;
}