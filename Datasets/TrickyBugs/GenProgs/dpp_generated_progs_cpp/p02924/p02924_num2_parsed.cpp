#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> permutation(N);
    for (int i = 0; i < N; i++) {
        permutation[i] = i + 1;
    }

    int maxSum = 0;
    do {
        int sum = 0;
        for (int i = 0; i < N; i++) {
            sum += i % permutation[i];
        }
        maxSum = max(maxSum, sum);
    } while (next_permutation(permutation.begin(), permutation.end()));

    cout << maxSum << endl;

    return 0;
}