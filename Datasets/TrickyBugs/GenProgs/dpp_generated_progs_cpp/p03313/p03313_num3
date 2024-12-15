#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int length = (1 << N);
    vector<int> A(length);
    for (int i = 0; i < length; ++i) {
        cin >> A[i];
    }
    
    vector<int> maxSum(length);
    for (int K = 1; K < length; ++K) {
        int maxVal = 0;
        for (int i = K; i > 0; --i) {
            for (int j = K; j > 0; --j) {
                if ((i | j) <= K) {
                    maxVal = max(maxVal, A[i] + A[j]);
                }
            }
        }
        maxSum[K] = maxVal;
    }
    
    for (int K = 1; K < length; ++K) {
        cout << maxSum[K] << endl;
    }
    
    return 0;
}