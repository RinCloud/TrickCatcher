#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A, B, C;
    cin >> N >> A >> B >> C;
    vector<int> l(N);
    for (int i = 0; i < N; i++) {
        cin >> l[i];
    }

    int minMP = 1e9; // Initialize with a large value
    for (int mask = 0; mask < (1 << N); mask++) {
        int mp = 0; // Current MP count
        vector<int> selected;
        for (int i = 0; i < N; i++) {
            if ((mask >> i) & 1) {
                selected.push_back(l[i]);
            }
        }

        if (selected.size() < 3) {
            continue;
        }

        sort(selected.begin(), selected.end()); // Sort the selected bamboos in increasing order

        // Check if it's possible to obtain bamboos of length A, B, C
        do {
            int a = selected[0], b = selected[1], c = selected[2];
            int tempMP = 0;

            // Calculate extension magic needed for A, B, C
            tempMP += abs(a - A) + abs(b - B) + abs(c - C);

            // Calculate shortening magic needed for the remaining bamboos
            for (int i = 3; i < selected.size(); i++) {
                tempMP += selected[i] - min(min(a, b), c);
            }

            minMP = min(minMP, tempMP);
        } while (next_permutation(selected.begin(), selected.end()));
    }

    cout << minMP << endl;

    return 0;
}