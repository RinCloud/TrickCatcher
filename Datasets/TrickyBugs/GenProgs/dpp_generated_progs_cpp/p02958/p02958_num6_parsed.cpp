#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> p(N);
    for (int i = 0; i < N; i++) {
        cin >> p[i];
    }

    // Check if the given permutation is already sorted
    bool alreadySorted = true;
    for (int i = 0; i < N; i++) {
        if (p[i] != i + 1) {
            alreadySorted = false;
            break;
        }
    }

    // If already sorted, print YES
    if (alreadySorted) {
        cout << "YES" << endl;
        return 0;
    }

    // Find the two positions i and j where p[i] > p[j]
    int i = -1, j = -1;
    for (int k = 0; k < N; k++) {
        if (p[k] > p[k + 1]) {
            i = k;
            break;
        }
    }
    for (int k = N - 1; k > 0; k--) {
        if (p[k] < p[k - 1]) {
            j = k;
            break;
        }
    }

    // Swap p[i] and p[j] to check if it becomes sorted
    swap(p[i], p[j]);

    // Check if the permutation is sorted now
    bool sorted = true;
    for (int k = 0; k < N; k++) {
        if (p[k] != k + 1) {
            sorted = false;
            break;
        }
    }

    // If sorted, print YES, otherwise print NO
    if (sorted) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}