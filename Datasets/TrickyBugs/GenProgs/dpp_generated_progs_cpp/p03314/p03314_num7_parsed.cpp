#include <iostream>
#include <vector>
#include <unordered_map>
#define MOD 1000000007
using namespace std;

int main() {
    int N, K, M;
    cin >> N >> K >> M;
    
    vector<int> A(M);
    for(int i=0; i<M; i++) {
        cin >> A[i];
    }
    
    long long ans = 0;
    unordered_map<int, int> count;
    vector<int> occur(K+1, 0);
    int left = 0;
    
    for(int right=0; right<N; right++) {
        occur[A[right]]++;
        
        while(occur[A[right]] > 1) {
            occur[A[left]]--;
            left++;
        }
        
        count[(right-left+1)%K]++;
    }
    
    for(auto it=count.begin(); it != count.end(); it++) {
        ans = (ans + ((1LL * it->second * (it->second - 1) / 2) % MOD)) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}