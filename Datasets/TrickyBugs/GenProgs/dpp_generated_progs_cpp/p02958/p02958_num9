#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    // Check if the given sequence can be sorted in ascending order
    bool possible = true;
    for (int i = 1; i < N; i++) {
        if (p[i] < p[i-1]) {
            // Try swapping p[i] and p[i-1]
            for (int j = i+1; j < N; j++) {
                if (p[j] < p[i-1]) {
                    swap(p[i], p[j]);
                    break;
                }
            }
            // Check if the sequence can be sorted now
            for (int j = 1; j < N; j++) {
                if (p[j] < p[j-1]) {
                    possible = false;
                    break;
                }
            }
            // Revert the swap
            swap(p[i], p[i-1]);
            break;
        }
    }

    // Output the result
    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}