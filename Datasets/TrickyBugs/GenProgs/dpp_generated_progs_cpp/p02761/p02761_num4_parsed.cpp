#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> s(M);
    vector<int> c(M);
    
    for(int i = 0; i < M; i++) {
        cin >> s[i] >> c[i];
    }
    
    int ans = -1;
    
    for(int i = 0; i <= 999; i++) {
        string num = to_string(i);
        if(num.length() != N) {
            continue;
        }
        
        bool valid = true;
        
        for(int j = 0; j < M; j++) {
            if(num[s[j] - 1] - '0' != c[j]) {
                valid = false;
                break;
            }
        }
        
        if(valid) {
            ans = i;
            break;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}