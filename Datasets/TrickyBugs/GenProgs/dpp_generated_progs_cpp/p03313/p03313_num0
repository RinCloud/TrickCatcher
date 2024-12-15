#include <iostream>
#include <vector>
#include <algorithm>
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

    vector<int> maxSum(size, 0);
    for (int K = 1; K < size; K++) {
        int maxVal = 0;
        for (int i = 0; i < K; i++) {
            for (int j = i + 1; j <= K; j++) {
                maxVal = max(maxVal, A[i] + A[j]);
            }
        }
        maxSum[K] = maxVal;
        cout << maxSum[K] << endl;
    }

    return 0;
}