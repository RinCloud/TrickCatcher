#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    int operations = 0;
    for (int i = 0; i < N - 1; i++) {
        if (h[i] < h[i + 1]) {
            operations += h[i + 1] - h[i];
        }
    }

    cout << operations << endl;

    return 0;
}