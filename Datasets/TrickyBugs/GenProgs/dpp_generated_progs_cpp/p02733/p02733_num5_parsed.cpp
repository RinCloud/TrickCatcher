#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<int>> S(H, vector<int>(W));
    for (int i = 0; i < H; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < W; ++j) {
            S[i][j] = row[j] - '0';
        }
    }
    
    int ans = 0;
    
    // check if the current bar can be divided into blocks
    auto isBlockPossible = [&](const vector<vector<int>>& bar) {
        int count = 0;
        for (int i = 0; i < H; ++i) {
            for (int j = 0; j < W; ++j) {
                count += bar[i][j];
            }
        }
        return count <= K;
    };
    
    // divide the bar horizontally
    auto divideHorizontally = [&](const vector<vector<int>>& bar) {
        vector<vector<vector<int>>> dividedBars;
        int currentBlock = 0;
        
        for (int i = 0; i < H; ++i) {
            vector<vector<int>> dividedBar;
            int count = 0;
            
            for (int j = 0; j < W; ++j) {
                count += bar[i][j];
                dividedBar.push_back({count <= K});
                
                if (count > K) {
                    currentBlock++;
                    dividedBar.push_back({bar[i][j]});

                    count = bar[i][j];
                }
            }
            
            dividedBars.push_back(dividedBar);
        }
        
        if (dividedBars[dividedBars.size() - 1].size() == 1) {
            dividedBars.pop_back();
        }
        
        return make_pair(currentBlock, dividedBars);
    };
    
    // divide the bar vertically
    auto divideVertically = [&](const vector<vector<int>>& bar) {
        vector<vector<vector<int>>> dividedBars;
        int currentBlock = 0;
        
        for (int i = 0; i < bar.size(); ++i) {
            vector<vector<int>> dividedBar;
            
            dividedBar.push_back(bar[i]);
            
            if (i < bar.size() - 1 && bar[i].size() > 1 && bar[i][0] + bar[i + 1][0] <= K) {
                dividedBar.push_back(vector<int>(bar[i].size(), 0));
            } else {
                currentBlock++;
            }
            
            dividedBars.push_back(dividedBar);
        }
        
        return make_pair(currentBlock, dividedBars);
    };
    
    vector<vector<int>> currentBar = S;
    while (!isBlockPossible(currentBar)) {
        auto [blocks, dividedBars] = divideHorizontally(currentBar);
        ans++;
        currentBar = dividedBars[0];
        
        for (int i = 0; i < blocks - 1; ++i) {
            auto [newBlocks, newDividedBars] = divideHorizontally(dividedBars[i]);
            ans++;
            currentBar.insert(currentBar.end(), newDividedBars.begin() + 1, newDividedBars.end());
        }
        
        if (!isBlockPossible(currentBar)) {
            int count = 0;
            for (int i = 0; i < currentBar.size(); ++i) {
                for (int j = 0; j < currentBar[i].size(); ++j) {
                    count += currentBar[i][j];
                }
            }
            ans += count / K;
        }
        
        if (ans > H + W) {
            break;
        }
        
        auto [newBlocks, newDividedBars] = divideVertically(currentBar);
        ans++;
        currentBar = newDividedBars[0];
        
        for (int i = 0; i < newBlocks - 1; ++i) {
            auto [blocks, dividedBars] = divideVertically(newDividedBars[i]);
            ans++;
            currentBar.insert(currentBar.end(), dividedBars.begin() + 1, dividedBars.end());
        }
    }
    
    if (!isBlockPossible(currentBar)) {
        int count = 0;
        for (int i = 0; i < currentBar.size(); ++i) {
            for (int j = 0; j < currentBar[i].size(); ++j) {
                count += currentBar[i][j];
            }
        }
        ans += count / K;
    }
    
    cout << ans << endl;
    
    return 0;
}