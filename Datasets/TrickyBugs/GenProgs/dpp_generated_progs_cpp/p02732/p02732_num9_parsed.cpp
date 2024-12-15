#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> balls(N);
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
    }
    
    unordered_map<int, int> freq;
    for (int i = 0; i < N; i++) {
        freq[balls[i]]++;
    }
    
    for (int i = 0; i < N; i++) {
        int cnt = freq[balls[i]] - 1;
        int ans = (N - 1) * (N - 2) / 2 - cnt * (cnt - 1) / 2;
        cout << ans << endl;
    }
    
    return 0;
}