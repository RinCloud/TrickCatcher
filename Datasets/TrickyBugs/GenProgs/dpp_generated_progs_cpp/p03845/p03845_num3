#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> T(N);
    for (int i = 0; i < N; i++) {
        cin >> T[i];
    }
    
    int M;
    cin >> M;
    
    vector<pair<int, int>> drinks(M);
    for (int i = 0; i < M; i++) {
        cin >> drinks[i].first >> drinks[i].second;
    }
    
    for (const auto& drink : drinks) {
        int totalTime = 0;
        for (int i = 0; i < N; i++) {
            if (i == drink.first - 1) {
                totalTime += drink.second;
            } else {
                totalTime += T[i];
            }
        }
        cout << totalTime << endl;
    }
    
    return 0;
}