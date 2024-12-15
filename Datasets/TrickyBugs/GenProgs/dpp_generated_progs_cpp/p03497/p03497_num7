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
    
    unordered_map<int, int> count;
    int distinct = 0;
    int left = 0;
    int ans = N;
    
    for (int right = 0; right < N; right++) {
        if (count[A[right]] == 0) {
            distinct++;
        }
        count[A[right]]++;
        
        if (distinct >= K) {
            while (left < right && count[A[left]] > 1) {
                count[A[left]]--;
                left++;
            }
            ans = min(ans, right - left + 1);
        }
    }
    
    cout << ans << endl;
    
    return 0;
}