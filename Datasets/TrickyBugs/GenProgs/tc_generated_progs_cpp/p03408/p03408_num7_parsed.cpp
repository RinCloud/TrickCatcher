#include <iostream>
#include <map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    map<string, int> m;
    for (int i = 0; i < N; ++i) {
        string s;
        cin >> s;
        ++m[s];
    }
    
    int M;
    cin >> M;
    
    for (int i = 0; i < M; ++i) {
        string t;
        cin >> t;
        --m[t];
    }
    
    int max_balance = 0;
    for (const auto& p : m) {
        max_balance = max(max_balance, p.second);
    }
    
    cout << max_balance << endl;
    return 0;
}
