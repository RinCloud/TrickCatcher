#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> cities(N);
    for (int i = 0; i < N; i++) {
        cin >> cities[i];
    }

    int max_distance = 0;
    for (int i = 0; i < N; i++) {
        max_distance = max(max_distance, abs(X - cities[i]));
    }

    cout << max_distance << endl;

    return 0;
}