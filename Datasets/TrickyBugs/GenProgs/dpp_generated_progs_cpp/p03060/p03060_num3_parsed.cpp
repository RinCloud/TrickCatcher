#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> V(N);
    for (int i = 0; i < N; i++) {
        cin >> V[i];
    }

    vector<int> C(N);
    for (int i = 0; i < N; i++) {
        cin >> C[i];
    }

    int max_value = 0;
    for (int i = 0; i < N; i++) {
        int value = V[i] - C[i];
        if (value > 0) {
            max_value += value;
        }
    }

    cout << max_value << endl;

    return 0;
}