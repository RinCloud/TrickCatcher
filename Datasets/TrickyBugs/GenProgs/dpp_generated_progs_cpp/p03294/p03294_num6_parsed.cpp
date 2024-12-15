#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Sort the array in descending order
    sort(a.rbegin(), a.rend());

    // Calculate the maximum value of f
    long long max_f = 0;
    for (int i = 0; i < N; i++) {
        max_f += a[i];
    }

    // Print the maximum value of f
    cout << max_f << endl;

    return 0;
}