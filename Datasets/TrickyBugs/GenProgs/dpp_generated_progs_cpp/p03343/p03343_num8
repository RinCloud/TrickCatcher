#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, K, Q;
    cin >> N >> K >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int minDiff = INT_MAX;

    for (int i = 0; i <= N - Q; i++) {
        int start = i;
        int end = i + Q - 1;

        sort(A.begin() + start, A.end());
        int smallest = A[start];
        int largest = A[end];

        if (end - start + 1 >= K) {
            int diff = largest - smallest;
            minDiff = min(minDiff, diff);
        }
    }

    cout << minDiff << endl;

    return 0;
}