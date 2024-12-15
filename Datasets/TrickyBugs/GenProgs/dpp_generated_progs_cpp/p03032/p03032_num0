#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    deque<int> D(N);
    for (int i = 0; i < N; i++) {
        cin >> D[i];
    }
    
    int maxSum = 0;
    
    for (int takeLeft = 0; takeLeft <= min(N, K); takeLeft++) {
        // Take out takeLeft jewels from the left
        deque<int> leftJewels(D.begin() + takeLeft, D.end());
        
        for (int takeRight = 0; takeRight <= min(N - takeLeft, K - takeLeft); takeRight++) {
            // Take out takeRight jewels from the right
            deque<int> rightJewels(D.begin(), D.begin() + N - takeRight);
            
            // Combine the left and right jewels
            deque<int> combinedJewels;
            combinedJewels.insert(combinedJewels.end(), leftJewels.begin(), leftJewels.end());
            combinedJewels.insert(combinedJewels.end(), rightJewels.begin(), rightJewels.end());
            
            // Sort the combined jewels in non-decreasing order
            sort(combinedJewels.begin(), combinedJewels.end());
            
            int sum = 0;
            for (int i = 0; i < combinedJewels.size(); i++) {
                if (i < K - takeLeft - takeRight) {
                    sum += combinedJewels[i];
                } else {
                    break;
                }
            }
            
            maxSum = max(maxSum, sum);
        }
    }
    
    cout << maxSum << endl;
    
    return 0;
}