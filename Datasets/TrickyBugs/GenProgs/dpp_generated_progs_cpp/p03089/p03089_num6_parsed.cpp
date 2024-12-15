#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> b(N);
    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    vector<int> a(N, 0); // Initialize with 0s

    for (int i = 0; i < N; i++) {
        int j = i + 1; // Choose j as i + 1
        a.insert(a.begin() + j - 1, j); // Insert j at position j in a
        if (a == b) {
            for (int k = 0; k < N; k++) {
                cout << a[k] << endl; // Print the chosen integers
            }
            return 0;
        }
    }

    cout << -1 << endl; // No sequence of N operations can make a equal to b
    return 0;
}