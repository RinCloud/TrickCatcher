#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Find maximum value of f
    int max_f = 0;
    for (int m = 0; m < a[0]; m++) {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += m % a[i];
        }
        max_f = max(max_f, sum);
    }

    // Print the maximum value of f
    cout << max_f << endl;

    return 0;
}