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

    int min_moto = 1001;
    for (int i = 0; i < N; i++) {
        min_moto = min(min_moto, m[i]);
    }

    int num_doughnuts = X / min_moto;

    for (int i = 0; i < N; i++) {
        X -= m[i];
        if (X < 0) {
            break;
        }
        num_doughnuts++;
    }

    cout << num_doughnuts << endl;

    return 0;
}