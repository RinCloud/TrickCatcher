#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int size = pow(2, N);
    vector<int> A(size);
    for (int i = 0; i < size; i++) {
        cin >> A[i];
    }

    vector<int> maxSum(size);
    for (int K = 1; K < size; K++) {
        int maxVal = 0;
        for (int i = 0; i < size; i++) {
            if (i <= K) {
                for (int j = i + 1; j < size; j++) {
                    if ((i | j) <= K) {
                        maxVal = max(maxVal, A[i] + A[j]);
                    }
                }
            }
        }
        maxSum[K] = maxVal;
    }

    for (int i = 1; i < size; i++) {
        cout << maxSum[i] << endl;
    }

    return 0;
}