#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            char c;
            cin >> c;
            S[i][j] = c - '0';
        }
    }
    
    int answer = 0;
    
    for (int h_cut = 0; h_cut < (1 << H); h_cut++) {
        for (int w_cut = 0; w_cut < (1 << W); w_cut++) {
            int count = 0;
            
            for (int i = 0; i < H; i++) {
                for (int j = 0; j < W; j++) {
                    if ((h_cut >> i) & 1) continue;
                    if ((w_cut >> j) & 1) continue;
                    count += S[i][j];
                }
            }
            
            if (count <= K) answer = max(answer, __builtin_popcount(h_cut) + __builtin_popcount(w_cut));
        }
    }
    
    cout << answer << endl;
    
    return 0;
}