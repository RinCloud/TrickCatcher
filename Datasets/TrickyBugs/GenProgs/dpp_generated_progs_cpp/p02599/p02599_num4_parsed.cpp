#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> colors(N);
    for (int i = 0; i < N; i++) {
        cin >> colors[i];
    }

    vector<int> uniqueColors(N + 1, 0);
    unordered_set<int> currentColors;
    for (int i = 0; i < N; i++) {
        currentColors.insert(colors[i]);
        uniqueColors[i + 1] = currentColors.size();
    }

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        cout << uniqueColors[r] - uniqueColors[l - 1] << endl;
    }

    return 0;
}