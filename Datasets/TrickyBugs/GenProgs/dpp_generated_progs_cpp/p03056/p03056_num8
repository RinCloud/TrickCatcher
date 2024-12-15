#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_complexity(vector<vector<char>>& grid) {
    int h = grid.size();
    int w = grid[0].size();
    
    // Check if all squares are black or all squares are white
    bool all_black = true;
    bool all_white = true;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (grid[i][j] == '.') {
                all_black = false;
            } else {
                all_white = false;
            }
        }
    }
    
    if (all_black || all_white) {
        return 0;
    }
    
    // Divide the grid into two subgrids by a line parallel to one of the sides of the grid,
    // and find the complexity of the subgrids
    int min_complexity = h + w - 1; // Initialize with maximum possible complexity
    
    for (int i = 1; i < h; i++) {
        vector<vector<char>> subgrid1(grid.begin(), grid.begin() + i);
        vector<vector<char>> subgrid2(grid.begin() + i, grid.end());
        
        int subgrid1_complexity = get_complexity(subgrid1);
        int subgrid2_complexity = get_complexity(subgrid2);
        
        int max_complexity = max(subgrid1_complexity, subgrid2_complexity);
        min_complexity = min(min_complexity, max_complexity);
    }
    
    for (int i = 1; i < w; i++) {
        vector<vector<char>> subgrid1;
        vector<vector<char>> subgrid2;
        
        for (int j = 0; j < h; j++) {
            subgrid1.push_back(vector<char>(grid[j].begin(), grid[j].begin() + i));
            subgrid2.push_back(vector<char>(grid[j].begin() + i, grid[j].end()));
        }
        
        int subgrid1_complexity = get_complexity(subgrid1);
        int subgrid2_complexity = get_complexity(subgrid2);
        
        int max_complexity = max(subgrid1_complexity, subgrid2_complexity);
        min_complexity = min(min_complexity, max_complexity);
    }
    
    return min_complexity + 1;
}

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<vector<char>> grid(h, vector<char>(w));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> grid[i][j];
        }
    }
    
    int complexity = get_complexity(grid);
    cout << complexity << endl;
    
    return 0;
}