#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> balls(N);
    unordered_map<int, int> count;
    int rewrite = 0;
    
    for (int i = 0; i < N; i++) {
        cin >> balls[i];
        count[balls[i]]++;
    }
    
    if (count.size() <= K) {
        cout << 0 << endl;
    } else {
        vector<pair<int, int>> freq(count.begin(), count.end());
        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b) {
            return a.second < b.second;
        });
        
        for (int i = 0; i < count.size() - K; i++) {
            rewrite += freq[i].second;
        }
        
        cout << rewrite << endl;
    }
    
    return 0;
}