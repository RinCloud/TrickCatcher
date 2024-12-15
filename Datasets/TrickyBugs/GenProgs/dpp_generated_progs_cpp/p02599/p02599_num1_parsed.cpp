#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> colors(N);
    for (int i = 0; i < N; i++) {
        cin >> colors[i];
    }

    vector<int> distinctColors(N);
    unordered_set<int> uniqueColors;
    for (int i = 0; i < N; i++) {
        uniqueColors.insert(colors[i]);
        distinctColors[i] = uniqueColors.size();
    }

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        int result = distinctColors[r - 1] - (l > 1 ? distinctColors[l - 2] : 0);
        cout << result << endl;
    }

    return 0;
}