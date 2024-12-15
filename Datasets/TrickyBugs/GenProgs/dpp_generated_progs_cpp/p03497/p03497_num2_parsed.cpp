#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    unordered_map<int, int> freq;
    int distinct = 0;
    int left = 0, right = 0;
    int minRewrite = N;
    
    while (right < N) {
        freq[A[right]]++;
        if (freq[A[right]] == 1) {
            distinct++;
        }
        right++;
        
        while (distinct > K) {
            freq[A[left]]--;
            if (freq[A[left]] == 0) {
                distinct--;
            }
            left++;
        }
        
        minRewrite = min(minRewrite, right - left);
    }
    
    cout << minRewrite << endl;
    
    return 0;
}