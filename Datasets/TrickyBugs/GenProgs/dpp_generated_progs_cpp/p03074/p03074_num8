#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    
    vector<int> feetCount(N + 1, 0);
    
    int handsCount = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') handsCount++;
        feetCount[i+1] = handsCount;
    }
    
    int maxCount = 0;
    for (int i = 0; i <= K; i++) {
        int count = feetCount[N] - feetCount[i] + feetCount[N] - feetCount[N - K + i];
        maxCount = max(maxCount, count);
    }
    
    cout << maxCount << endl;
    
    return 0;
}