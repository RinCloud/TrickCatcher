#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    string N;
    cin >> N;
    
    int n = N.size();
    
    vector<int> cnt(n, 0);
    
    for(int i = 0; i < n; i++) {
        cnt[i] = N[i] - '0';
    }
    
    int answer = cnt[n-1];
    
    for(int i = n-2; i >= 0; i--) {
        int diff = cnt[i+1] - cnt[i];
        
        if(diff >= 5) {
            cnt[i] += 1;
        }
        
        answer += cnt[i];
    }
    
    cout << answer << endl;
    
    return 0;
}