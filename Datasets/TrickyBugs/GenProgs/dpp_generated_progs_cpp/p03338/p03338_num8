#include<iostream>
#include<cstring>
#include<algorithm>
#include<set>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    
    int ans = 0;
    for(int i = 1; i < N; i++) {
        set<char> X, Y;
        
        for(int j = 0; j < i; j++)
            X.insert(S[j]);
        
        for(int j = i; j < N; j++)
            Y.insert(S[j]);
        
        int cnt = 0;
        
        for(auto ch : X) {
            if(Y.find(ch) != Y.end())
                cnt++;
        }
        
        ans = max(ans, cnt);
    }
    
    cout << ans << endl;
    
    return 0;
}