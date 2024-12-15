#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;
    
    unordered_map<int, int> cnt;
    vector<int> sum(N+1);
    int current = 0;
    for (int i = 1; i <= N; i++) {
        if (S[i-1] == '>') current++;
        else if (S[i-1] == '<') current--;
        
        sum[i] = current;
        cnt[current]++;
    }
    
    long long ans = 0;
    current = 0;
    for (int i = N; i >= 1; i--) {
        if (S[i-1] == '+') current--;
        else if (S[i-1] == '-') current++;
        
        ans += cnt[current];
        if (S[i-1] == '>') ans--;
        else if (S[i-1] == '<') ans++;
    }
    
    cout << ans << endl;
    
    return 0;
}