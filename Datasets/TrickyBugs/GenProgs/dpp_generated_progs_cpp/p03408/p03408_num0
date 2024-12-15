#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N;
    
    unordered_map<string, int> blue;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        blue[s]++;
    }
    
    cin >> M;
    
    unordered_map<string, int> red;
    for (int i = 0; i < M; i++) {
        string t;
        cin >> t;
        red[t]++;
    }
    
    int maxEarnings = 0;
    for (auto it : blue) {
        int earnings = it.second - red[it.first];
        maxEarnings = max(maxEarnings, earnings);
    }
    
    cout << maxEarnings << endl;
    
    return 0;
}