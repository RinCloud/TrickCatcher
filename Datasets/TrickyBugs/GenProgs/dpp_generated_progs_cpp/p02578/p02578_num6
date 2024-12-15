#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }
    
    int minTotalHeight = 0;
    int maxHeight = heights[0];
    for (int i = 1; i < n; i++) {
        if (heights[i] > maxHeight) {
            maxHeight = heights[i];
        } else {
            minTotalHeight += (maxHeight - heights[i]);
        }
    }
    
    cout << minTotalHeight << endl;
    
    return 0;
}