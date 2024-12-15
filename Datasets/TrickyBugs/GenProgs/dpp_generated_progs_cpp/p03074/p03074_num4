#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxConsecutiveHands(int N, int K, const string& S) {
    int maxHands = 0;
    vector<int> handsCount(N + 1, 0);
    
    // Calculate the cumulative hands count
    for (int i = 1; i <= N; i++) {
        handsCount[i] = handsCount[i-1] + (S[i-1] == '1');
    }
    
    // Try flipping each consecutive segment of length [1, K]
    for (int len = 1; len <= K; len++) {
        for (int startPos = 0; startPos <= N - len; startPos++) {
            int endPos = startPos + len - 1;
            
            // Total hands count after flipping the segment
            int totalHands = handsCount[startPos] + (handsCount[N] - handsCount[endPos]);
            
            // Update the maximum
            maxHands = max(maxHands, totalHands);
        }
    }
    
    return maxHands;
}

int main() {
    int N, K;
    string S;
    cin >> N >> K >> S;
    
    int result = maxConsecutiveHands(N, K, S);
    cout << result << endl;
    
    return 0;
}