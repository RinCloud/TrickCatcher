#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int size = 1 << N;
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    vector<int> maxSum(size - 1);

    for (int K = 1; K < size; K++) {
        int maxVal = 0;
        for (int i = 0; i < size; i++) {
            if (i > K) break;
            for (int j = i + 1; j < size; j++) {
                if (j > K) break;
                maxVal = max(maxVal, A[i] + A[j]);
            }
        }
        maxSum[K - 1] = maxVal;
    }

    for (int i = 0; i < size - 1; i++) {
        cout << maxSum[i] << endl;
    }

    return 0;
}